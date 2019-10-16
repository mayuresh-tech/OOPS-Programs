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
typedef map<string, int> phonemap;

/* Main Function */
int main()
{
	int n;
	string name;
	long int rollno;
	phonemap phone;

	cout << "\n How many records you want to enter: ";
	cin >> n;

	cout << "\n Enter sets of Name and Roll No.: ";
	for (int i = 0;i < n;i++)
	{
		cout << "\n \n Name: ";
		cin >> name;
		cout << "\n Roll No.: ";
		cin >> rollno;
		phone[name] = rollno;
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
	cout << "\n Enter name for searching Roll.No: ";
	cin >> name;

	rollno = phone[name];
	cout << "\n Number: " << rollno << endl;

	return 0;
}
/* End of Main Function */