/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 14 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>
#include<string>
#include<map>
#include<cstdlib>
#include <iomanip>

/* Defining namespace */
using namespace std;

/* Defining STL Map */
typedef map<string, long long int> phonemap;

/* Main Function */
int main()
{
	int n;
	string name;
	long long int phno;
	phonemap phone;

	cout << "\n How many records you want to enter: ";
	cin >> n;

	cout << "\n Enter sets of Name and Phone No.: ";
	for (int i = 0;i < n;i++)
	{
		cout << "\n \n Name: ";
		cin >> name;
		cout << "\n Phone no.: ";
		cin >> phno;
		phone[name] = phno;
	}

	int n1 = phone.size();
	cout << "\n \n Size of Map: " << n1 << endl;

	cout << "\n \n List of Records: \n";
	phonemap::iterator p;
	for (p = phone.begin();p != phone.end();p++)
	{
		cout << "\n " << setw(5) << (*p).first << setw(5) << "\t" << (*p).second << setw(5) << endl;
	}

	cout << "\n";
	cout << "\n Enter name for searching Phone No: ";
	cin >> name;

	phno = phone[name];
	cout << "\n Phone No.: " << phno << endl; 

	return 0;
}
/* End of Main Function */