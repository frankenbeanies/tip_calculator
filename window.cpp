#include <iostream>
#include <QDoubleSpinBox>
#include <QLabel>
#include <QSlider>
#include <QString>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
	//setup window
	setFixedSize(512, 192);
	setWindowTitle("Tip Calculator");

	//Line 1

	//Bill Amount:
	bill_label = new QLabel("Bill Amount: ", this);
	bill_label -> setGeometry(10, 10, 90, 30);

	//$
	bill_money_label = new QLabel("$", this);
	bill_money_label -> setGeometry(110, 10, 10, 30);

	//Edit Box
	bill_edit = new QDoubleSpinBox(this);
	bill_edit -> setGeometry(130, 10, 100, 30);
	bill_edit -> setMaximum(100000.0);

	//Line 2

	//Percent: 
	percent_label = new QLabel("Tip Percent: ", this);
	percent_label -> setGeometry(10, 50, 90, 30);

	//Slider
	percent_slider = new QSlider(Qt::Horizontal, this);
	percent_slider -> setGeometry(110, 50, 250, 30);

	//%
	percent_p_label = new QLabel("%%", this);
	percent_p_label -> setGeometry(380, 50, 12, 30);

	//Edit Box
	percent_edit = new QDoubleSpinBox(this);
	percent_edit -> setGeometry(400, 50, 100, 30);
	percent_edit -> setMaximum(100.0);

	//Line 3

	//Tip Amount: 
	tip_label = new QLabel("Tip Amount: ", this);
	tip_label -> setGeometry(10, 90, 90, 30);

	//$
	tip_money_label = new QLabel("$", this);
	tip_money_label -> setGeometry(110, 90, 10, 30);

	//XX.XX
	tip_num_label = new QLabel("0.00", this);
	tip_num_label -> setGeometry(130, 90, 100, 30);

	//Line 4

	//Total: 
	total_label = new QLabel("Total: ", this);
	total_label -> setGeometry(10, 130, 90, 30);

	//$
	total_money_label = new QLabel("$", this);
	total_money_label -> setGeometry(110, 130, 10, 30);

	//XX.XX
	total_num_label = new QLabel("0.00", this);
	total_num_label -> setGeometry(130, 130, 100, 30);

	//Connect Listeners
	connect(percent_slider, SIGNAL(valueChanged(int)), this, SLOT(percentValueChanged(int)));
	connect(percent_edit, SIGNAL(valueChanged(double)), this, SLOT(percentValueChanged(double)));
	connect(bill_edit, SIGNAL(valueChanged(double)), this, SLOT(billValueChanged(double)));
}

void Window::billValueChanged(double value)
{
	tip.setBillAmount(value);
	tip_num_label -> setText(QString::number(tip.getTipAmount(), 'f', 2));
	total_num_label -> setText(QString::number(tip.getTotal(), 'f', 2));
}

void Window::percentValueChanged(double value)
{
	percent_slider -> blockSignals(true);
	percent_slider -> setValue(value);
	percent_slider -> blockSignals(false);
	tip.setTipPercent(value);
	tip_num_label -> setText(QString::number(tip.getTipAmount(), 'f', 2));
	total_num_label -> setText(QString::number(tip.getTotal(), 'f', 2));
}

void Window::percentValueChanged(int value)
{
	percent_edit -> setValue(value);
	tip.setTipPercent(value);
	tip_num_label -> setText(QString::number(tip.getTipAmount(), 'f', 2));
	total_num_label -> setText(QString::number(tip.getTotal(), 'f', 2));
}