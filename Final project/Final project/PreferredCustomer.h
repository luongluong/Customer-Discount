#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H
#include"CustomerData.h"

class PreferredCustomer : public CustomerData, public PersonData
{
private:
	double purchaseAmount;
	double discountLevel;
public:
	//Constructor
	PreferredCustomer()
	{
		purchaseAmount = 0.0;
		discountLevel = 0.0;
	}

	PreferredCustomer(double a, double b)
	{
		purchaseAmount = a;
		discountLevel = b;
	}
	//Mutator
	void setPur(double a)
	{
		purchaseAmount = a;
	}
	
	// Accessor
	double getPur()
	{
		return purchaseAmount;
	}
};
#endif