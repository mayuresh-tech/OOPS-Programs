/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 9 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>
#include<string>
#include<fstream>

/* Defining namespace */
using namespace std;

/* CLass Declaration */
class student
{
	int roll;
	string name, cl;
	char div;
	
	public:
		void get();
		void put();
};
/* End of Class Declaration */

/* Body of Methods */
void student::get()
{
	cout << "\n Enter Name: ";
	cin >> name;
	
	cout << "\n Enter Roll Number: ";
	cin >> roll;
	
	cout << "\n Enter Class (FE/SE/TE/BE/ME): ";
	cin.ignore();
	getline(cin, cl);;
	
	cout << "\n Enter Division: ";
	cin >> div;
}

void student::put()
{
	cout << "\n Name: " << name;
	
	cout << "\n Roll Number: " << roll;
	
	cout << "\n Class: " << cl;
	
	cout << "\n Division: " << div;
}
/* End of Body of Methods */

/* Main Function */
int main()
{
	student s[2];
	fstream f;
	
	f.open("INFO.txt", ios::in | ios::out);
	
	cout << "\n Enter details:";
	for (int i = 0;i < 2;i++)
	{
		s[i].get();
		f.write((char*)&s, sizeof(s[i]));
	}

	cout << "\n OUTPUT \n";
	f.seekg(0);
	for (int i = 0;i < 2;i++)
	{
		f.read((char*)&s, sizeof(s[i]));
		s[i].put();
		cout << "\n-------------------------------\n";
	
	}
	f.close();
	return 0;
}
/* End of Main Function */