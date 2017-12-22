// Luong Luong
// Pro.Javaher
//Cosc 1337
//Final Programing portion
#include<iostream>
#include<string>
#include"PreferredCustomer.h"
using namespace std;

int main()
{
	double purchase;
	string again;
	string yes;
	string choice;
	string a, b, c, d,  e;
	string zipcode, phonenumber;
	bool x = false;
	// Class Object
	PreferredCustomer test;

	do
	{
		// Part 1 output
		cout << "What is your first name? \n";
		getline(cin, a);
		test.setfName(a);

		cout << "What is yout last name? \n";
		getline(cin, b);
		test.setlName(b);

		cout << "Please input your address: \n";
		getline(cin, c);
		test.setAddress(c);

		cout << "Please input your city: \n";
		getline(cin, d);
		test.setCity(d);

		cout << "Please input your state: \n";
		getline(cin, e);
		test.setState(e);

		cout << "Please input your zip: \n";
		cin >> zipcode;
		test.setZip(zipcode);

		cout << "Please input your phone numbber: \n";
		cin >> phonenumber;
		test.setPhone(phonenumber);
		/////////////////////////////////////
		// The information from customer
		cout << "\nThis is your information: \n";
		cout << "First name: ";
		cout << test.getfirstName();
		cout << endl;

		cout << "Last name: ";
		cout << test.getlastName();
		cout << endl;

		cout << "Address: ";
		cout << test.getAddress();
		cout << endl;

		cout << "City: ";
		cout << test.getCity();
		cout << endl;

		cout << "State: ";
		cout << test.getState();
		cout << endl;

		cout << "Zip Code: ";
		cout << test.getzipCode();
		cout << endl;

		cout << "Phone: ";
		cout << test.getphoneNumber();
		cout << endl;

		///////////////////////////////////////////////////////////
		cout << "\nDo you want to be in a mailing list? (yes/no) \n";
		 cin >>choice;

		
		if (choice == "yes"||choice=="y")
		{
			x = true;
			test.setMail(x);
			cout << test.getMail() << endl;
		}

		else
		{
			x = false;
			test.setMail(x);
			cout << test.getMail() << endl;
		}

		//*******************************//
		//			Part 2			    //		
		//*****************************//

		cout << "Please input your total amount: \n";
		cin >> purchase;
		// Input validation
		while (purchase < 0)
		{
			cout << "Please insert postivie values for any sale\n";
			cin >> purchase;
			
		}
		
		// If else statement
		if (purchase < 1000 && purchase >= 500)
		{
			test.setPur(purchase);
			cout << "Your amount is: " << test.getPur() << "$" << endl;
			cout << "You get 5% discount for all futrue purchases\n";
		}
		else if (purchase < 1500 && purchase >= 1000)
		{
			test.setPur(purchase);
			cout << "Your amount is: " << test.getPur() << "$" << endl;;
			cout << "You get 6% discount for all future purchases\n";
		}
		else if (purchase < 2000 && purchase >= 15000)
		{
			test.setPur(purchase);
			cout << "Your amount is: " <<test.getPur() << "$" << endl;
			cout << "Yout get 7% discount on all future purchases\n";
		}
		else if (purchase >= 2000)
		{
			test.setPur(purchase);
			cout << "Your amount is: " << test.getPur() << "$" << endl;
			cout << "Yout get 10% discount on all future purchases\n";
		}
		else
			cout << "You get no discount! \n";

		

		cout << "\nDo you want to type in again? (Y/N)\n";
		cin >> again;
	} while (again == "Y" || again == "y");

	system("pause");
	return 0;
}