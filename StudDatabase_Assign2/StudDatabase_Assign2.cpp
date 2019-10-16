/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 2 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>
#include<fstream>
#include<iomanip>

/* Defining namespace */
using namespace std;

/* Class Declaration */
class student
{
	private:
		string bloodgroup, name, dob;
		int rollno;
		char div;
	public:
		void getdata();
		void putdata();
};
/* End of Class Declaration */

/* Methods Body */
void student::getdata()
{
	cout << "\nEnter name of student: ";
	cin >> name;
	
	cout << "\nEnter roll number of student: ";
	cin >> rollno;
	
	cout << "\nEnter division of student: ";
	cin >> div;
	
	cout << "\nEnter date of birth (DD/MM/YYYY): ";
	cin >> dob;
	
	cout << "\nEnter blood group of student: ";
	cin >> bloodgroup;
}

void student::putdata()
{
	cout << "\n" << setiosflags(ios::left) << setw(10) << name << setiosflags(ios::left) << setw(7) << rollno << setw(4) << div << setw(10) << dob << setw(9) << " " << bloodgroup << endl;
}
/* End of Methods Body */

/* Main Function */
int main() 
{

	student s[10];
	fstream f;
	static int k;
	int n, i, j;
	
	f.open("database.txt", ios::out);
	
	if (!f)
	{
		cout << "Error opening file";
	}

	cout << "\nEnter total number of students: ";
	cin >> n;

	for (i = 0;i < n;i++)
	{
		cout << "\nFor Student: " << i + 1;
		s[i].getdata();
		f.write((char*)&s[i], sizeof(s[i]));
		k++;
	}
	f.close();

	cout << "\n********Details of students are as********" << endl;
	cout << setiosflags(ios::left) << setw(10) << "Name" << setw(7) << "Rollno" << setw(4) << "Div" << setw(10) << "DOB" << setw(9) << " BloodGroup" << endl;

	f.open("database.txt", ios::in);
	f.seekg(0);
	for (j = 0;j < n;j++)
	{
		f.read((char*)&s[i], sizeof(s[i]));
		s[j].putdata();

	}
	f.close();

	cout << "\nTotal number of students: " << k << endl;
	return 0;
}
/* End of Main Function */



