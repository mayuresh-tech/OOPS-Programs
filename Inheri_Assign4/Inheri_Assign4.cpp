/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 4*/
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header file */
#include<iostream>
#include<string>
#include<stdlib.h>

/* Defining namespace */
using namespace std;

/* Base Class */
class publication
{
	public:
		string title;
		float price;
};
/* End of Base Class Declaration */

/* Derived Class BOOK Declaration */
class book :public publication
{
	int pagecount;
	public:
		void get();
		void display();
};
/* End of Class Declaration*/

/* Body of methods for BOOK Class */
void book::get()
{
	cin.ignore();

	cout << "\n*******************************************";
	cout << "\n \t INSERT BOOK RECORDS";
	cout << "\n*******************************************";

	cout << "\n\nEnter Title: ";
	getline(cin, title);

	cout << "\nEnter Price: ";
	cin >> price;

	cout << "\nPages: ";
	cin >> pagecount;
}

void book::display()
{
	cout << "\n*******************************************";
	cout << "\n \t DISPLAY BOOK RECORDS";
	cout << "\n*******************************************";

	cout << "\n\nTitle: " << title;

	cout << "\nPrice: " << price;

	cout << "\nPages: " << pagecount;

	cout << "\n===========================================";
}
/* End of methods body */

/* Dervied Class TAPE Declaration */
class tape :public publication
{
	float pltime;
	public:
		void gettape();
		void displaytape();
};
/* End of CLass Declaration */

/* Body of methods for TAPE Class */
void tape::gettape()
{
	cin.ignore();

	cout << "\n*******************************************";
	cout << "\n \t INSERT TAPE RECORDS";
	cout << "\n*******************************************";

	cout << "\n\nEnter Title: ";
	getline(cin, title);

	cout << "\nEnter Price: ";
	cin >> price;

	cout << "\nPlaytime: ";
	cin >> pltime;
}

void tape::displaytape()
{
	cout << "\n*******************************************";
	cout << "\n \t DISPAY TAPE RECORDS";
	cout << "\n*******************************************";

	cout << "\n\nTitle: " << title;

	cout << "\nPrice: " << price;

	cout << "\nPlaytime: " << pltime << " minutes";

	cout << "\n====================================================";
}
/* End of Methods Body */

/* Main Function */
int main()
{
	int i, ch, n;
	book b[20];
	tape t[20];

	cout << "How many records you want to enter: ";
	cin >> n;

	for (i = 0;i < n;i++)
	{
		b[i].get();
	}

	for (i = 0;i < n;i++)
	{
		t[i].gettape();
	}

	while (1)
	{
		cout << "\n\n======================MENU==========================";
		cout << "\n1:Book\n2:Tape\n3:Exit";

		cout << "\nEnter choice: ";
		cin >> ch;
		
		switch (ch)
		{
			case 1:     
				for (i = 0;i < n;i++)
				{
					b[i].display();
				}
				break;

			case 2:
				for (i = 0;i < n;i++)
				{
					t[i].displaytape();
				}
				break;

			case 3: 
				exit(0);
				break;
		}
	}
	return 0;
}
/* End of Main Function */