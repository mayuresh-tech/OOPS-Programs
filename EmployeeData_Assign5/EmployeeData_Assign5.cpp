/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 5 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header fles */
#include<iostream>
#include<string>

/* Defining namespace */
using namespace std;

/* Class Personal */
class personal
{
	public:
		string name, relstat;
		int age;
		long long int phone;

		void getp()
		{
			cout << "\n---------------Personal Data-------------------\n" << endl;
			
			cout << "\n Enter Name: ";
			cin >> name;
	
			cout << "\n Enter Phone Number: ";
			cin >> phone;
		
			cout << "\n Enter age: ";
			cin >> age;
		
			cout << "\n Enter Marital Status: ";
			cin.ignore();
			getline(cin, relstat);
		}

		void putp()
		{
			cout << "\n Name: " << name;
		
			cout << "\n Age:" << age;
		
			cout << "\n Contact:" << phone;
			
			cout << "\n Marital Status: " << relstat;
		}
};
/* End of Class Personal */

/* Class Professional */
class professsional
{
	public:
		long int experience, sal;
		string domain;
	
		void getpr()
		{
			cout << "\n---------------Professsional Data-------------------\n";
		
			cout << "\n Enter Domain: ";
			cin.ignore();
			getline(cin, domain);
		
			cout << "\n Enter Experience: ";
			cin >> experience;
		
			cout << "\n Enter salary: ";
			cin >> sal;
		}

		void putpr()
		{
			cout << "\n Domain: " << domain;
		
			cout << "\n Experience:" << experience;
		
			cout << "\n Salary:" << sal;
		}
};
/* End of Class Professional */

/* Class Academic */
class academic
{
	public:
		float sscperc, hscperc;
		string stream, gclass;
		
		void geta()
		{
			cout << "\n---------------Academic Data-------------------\n";
			
			cout << "\n Enter SSC Percentage: ";
			cin >> sscperc;
		
			cout << "\n Enter HSC Percentage: ";
			cin >> hscperc;
			
			cout << "\n Enter Stream: ";
			cin.ignore();
			getline(cin, stream);
		
			cout << "\n Enter Class Obtained: ";
			cin >> gclass;
		}

		void puta()
		{
		
			cout << "\n SSC Percentage: " << sscperc;
			
			cout << "\n HSC Percentage:" << hscperc;
		
			cout << "\n Stream:" << stream;
			
			cout << "\n Class Obtained:" << gclass;
		}
};
/* End of Class Academic */

/* Class Biodata */
class biodata :public personal, public professsional, public academic
{
	public:
		void put()
		{
			cout << "\n===============BIODATA================\n";
			putp();
			putpr();
			puta();
		}
};
/* End of Class Biodata */

/* Main Function */
int main()
{
	biodata b;
	
	b.getp();
	b.getpr();
	b.geta();
	b.put();
	
	return 0;
}
/* End of Main Function */