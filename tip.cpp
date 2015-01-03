#include "tip.h"

Tip::Tip()
{
	bill_amount = 0.0;
	tip_percent = 0.0;
}

double Tip::getBillAmount()
{
	return bill_amount;
}

double Tip::getTipAmount()
{
	return tip_percent * .01 * bill_amount;
}

double Tip::getTipPercent()
{
	return tip_percent;
}

double Tip::getTotal()
{
	return bill_amount + getTipAmount();
}

void Tip::setBillAmount(double amount)
{
	bill_amount = amount;
}

void Tip::setTipPercent(double percent)
{
	tip_percent = percent;
}