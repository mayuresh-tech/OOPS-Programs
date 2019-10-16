/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 8 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>
#include<string>

/* Defining namespace */
using namespace std;

/* Class Declaration */
class Data
{
		int age, ch;
		long int income;
		string city;
		char vehicle;
	public:
		void getdata();
		void checkdata();
};
/* End of Class Declaration */

/* Body of Methods */
void Data::getdata()
{
	cout << "\n Enter your age: ";
	cin >> age;
	
	cout << "\n Enter your income per month: ";
	cin >> income;

	cout << "\n Enter your city: ";
	cout << "\n 1.Pune 2.Mumbai 3.Banglore 4.Chennai 5.Other\n \nEnter your choice: ";
	cin >> ch;

	cout << "\n Do you have four wheeler(Y/N): ";
	cin >> vehicle;
}
void Data::checkdata()
{
	if (age >= 18 && age <= 55)
	{
		cout << "\nYour age is " << age;
	}
	else
	{
		throw(age);
	}

	if (income >= 50000 && income <= 100000)
	{
		cout << "\nYour income is :" << income;
	}
	else
	{
		throw(income);
	}

	switch (ch)
	{
	case 1:
		city = "Pune";
		cout << "\n You live in " << city << " city";
		break;

	case 2:
		city = "Mumbai";
		cout << "\nYou live in " << city << " city";
		break;

	case 3:
		city = "Banglore";
		cout << "\nYou live in " << city << " city";
		break;

	case 4:
		city = "Chennai";
		cout << "\nYou live in " << city << " city";
		break;

	default:
		throw(city);
		break;
	}


	if (vehicle == 'Y' || vehicle == 'y')
	{
		cout << "\nYou have a vehicle";
	}
	else
	{
		throw(vehicle);
	}
}
/* End of Body of Methods */

/* Main Function */
int main()
{
	Data a;
	char ch;

	do
	{
		try
		{
			int ch;
			a.getdata();
			a.checkdata();
		}
		catch (int age)
		{
			cout << "\nException caught in age";
		}
		catch (long int income)
		{
			cout << "\nException caught in income";
		}
		catch (string city)
		{
			cout << "\nException caught in city";
		}
		catch (char c)
		{
			cout << "\nException caught in vehicle";
		}

		cout << "\nPress Y to continue and N to quit";
		cin >> ch;

	} while (ch == 'Y' || ch == 'y');

	return 0;
}
/* End of Main Function */