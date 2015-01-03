#ifndef TIP_H
#define TIP_H

class Tip
{
public:
	Tip();
	double getBillAmount();
	double getTipAmount();
	double getTipPercent();
	double getTotal();
	void setBillAmount(double amount);
	void setTipPercent(double amount);
private:
	double bill_amount;
	double tip_percent;
};

#endif