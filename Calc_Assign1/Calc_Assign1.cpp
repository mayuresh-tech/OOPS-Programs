/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 1 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>

/* Defining namespace */
using namespace std;

/* Class Declaration */
class Calculator
{
	int a, b;

	public:
		void accept();
		void add();
		void sub();
		void mul();
		void div();
};
/* End of Class Declaration */

/* Methods Body */
void Calculator::accept()
{
	cout << "\n Enter 2 numbers: ";
	cin >> a >> b;
}

void Calculator::add()
{
	cout << "\n Addition is: " << a + b << endl;
}

void Calculator::sub()
{
	cout << "\n Subtraction is: " << a - b << endl;
}

void Calculator::div()
{
	cout << "\n Divsion is: " << (float) a / b << endl;
	cout << "\n Remainder is: " << a % b << endl;
}

void Calculator::mul()
{
	cout << "\n Multiplication is: " << a * b << endl;
}
/* End of Methods Body */

/* Main Function */
int main()
{
	Calculator p;
	int ch;
	p.accept();

	while (1)
	{
		cout << "\n 1. Addition \n 2. Subtraction \n 3. Multiplication\n 4. Division\n 5. Exit" << endl;
		cout << "\n Enter choice :";
		cin >> ch;

		switch (ch)
		{
			case 1: 
				p.add();
				break;

			case 2: 
				p.sub();
				break;

			case 3:
				p.mul();
				break;

			case 4: 
				p.div();
				break;

			case 5: 
				exit(0);

			default: 
				cout << "\n Enter correct choice" << endl;
				break;
		}
	}
	return 0;
}
/* End of Main Function */