#ifndef PERSONDATA_H
#define PERSONDATA_H
#include<string>
using namespace std;
// class declaration
class PersonData
{
private:				// Private members
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zipCode;
	string phoneNumber;

public:				// public members

	//Mutator function
	void setlName(string y)
	{
		lastName = y;
	}

	void setfName(string y)
	{
		firstName = y;
	}

	void setAddress(string y)
	{
		address = y;
	}

	void setCity(string y)
	{
		city = y;
	}

	void setState(string y)
	{
		state = y;
	}

	void setZip(string y)
	{
		zipCode = y;
	}

	void setPhone(string y)
	{
		phoneNumber = y;
	}



	//Accessor function
	string getlastName()
	{
		return lastName;
	}

	string getfirstName()
	{
		return firstName;
	}

	string getAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}

	string getState()
	{
		return state;
	
	}

	string getzipCode()
	{
		return zipCode;
	}

	string getphoneNumber()
	{
		return phoneNumber;
	}


};
#endif // !PERSONDATA_H
