#ifndef CUSTOMERDATA_H
#define CUSTOMER_H
#include"PersonData.h"
class CustomerData //: public PersonData		// Inheritance
{
private:						// Private members
	int customerNumber;
	bool mailingList;
public:			// Public function
	
	// Mutator function
	void setcusNum(int x)
	{
		customerNumber = x;
	}

	void setMail(bool x)
	{
		mailingList = x;
	}

	// Accessor
	int getcusNum()
	{
		return customerNumber;
	}

	bool getMail()
	{
		return mailingList;
	}


};





#endif

