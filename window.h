#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "tip.h"

class QDoubleSpinBox;
class QLabel;
class QSlider;
class Window : public QWidget
{
	Q_OBJECT
public:
	explicit Window(QWidget *parent = 0);
	virtual ~Window() {};
private:
	//Line 1
	QLabel *bill_label;
	QLabel *bill_money_label;
	QDoubleSpinBox *bill_edit;
	//Line 2
	QLabel *percent_label;
	QSlider *percent_slider;
	QLabel *percent_p_label;
	QDoubleSpinBox *percent_edit;
	//Line 3
	QLabel *tip_label;
	QLabel *tip_money_label;
	QLabel *tip_num_label;
	//Line 4
	QLabel *total_label;
	QLabel *total_money_label;
	QLabel *total_num_label;

	Tip tip;
public slots:
	void billValueChanged(double value);
	void percentValueChanged(double value);
	void percentValueChanged(int value);
};

#endif