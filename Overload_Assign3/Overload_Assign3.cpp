/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 3 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>

/* Defining size with fix value of 10 */
#define size 10

/* Defining namespace */
using namespace std;

/* Class Declaration */
class complex
{
	float real, imag;
public:
	complex()
	{
		real = 0;
		imag = 0;
	}
	complex(float x, float y)
	{
		real = x;
		imag = y;
	}
	complex operator +(complex);
	complex operator *(complex);
	void display(void);
};
/* End of Class Declaration */

/* CLass Declaration */
class vector
{
	int v[size];
public:
	friend istream& operator >>(istream&, vector&);
	friend ostream& operator <<(ostream&, vector&);
	vector()
	{
		for (int i = 0;i < size;i++)
			v[i] = 0;
	}
	vector(int* x)
	{
		for (int i = 0;i < size;i++)
			v[i] = x[i];
	}
};
/* End of Class Declaration */

/* Body of Methods of CLass Complex */
complex complex::operator +(complex c)
{
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return (temp);
}

complex complex::operator *(complex c)
{
	complex temp2;
	temp2.real = real * c.real;
	temp2.imag = imag * c.imag;
	return (temp2);
}

void complex::display(void)
{
	cout << real << "+" << imag << "i";
}
/* End of Methods Body */

/* Body of Methods of CLass Vector */
istream& operator >>(istream& din, vector& b)
{
	for (int i = 0;i < 3;i++)
		din >> b.v[i];
	return (din);
}
ostream& operator <<(ostream& dout, vector& b)
{
	dout << "(" << b.v[0];
	for (int i = 1;i < 3;i++)
		dout << "," << b.v[i];
	dout << ")";
	return (dout);
}
int x[size];
/* End of Methods Body */

/* Main Function */
int main()
{
	float r1, img1, r2, img2;
	complex c1, c2, c3;

	cout << "\n Enter first complex number: ";
	cout << "\n Enter real part: ";
	cin >> r1;
	cout << "Enter imaginary part: ";
	cin >> img1;

	cout << "\n Enter second complex number: ";
	cout << "\n Enter real part: ";
	cin >> r2;
	cout << "Enter imaginary part: ";
	cin >> img2;

	c1 = complex(r1, img1);
	c2 = complex(r2, img2);
	
	cout << "\n******ADDITION********\n";
	c3 = c1 + c2;
	cout << "\nc1="; c1.display();
	cout << "\nc2="; c2.display();
	cout << "\nc3="; c3.display();

	cout << "\n\n******MULTIPLICATION********\n";
	c3 = c1 * c2;
	cout << "\nc1="; c1.display();
	cout << "\nc2="; c2.display();
	cout << "\nc3="; c3.display();

	cout << "\n";
	vector m;
	vector n = x;
	cout << "\nEnter 3 elements of vector m: ";
	cin >> m;
	cout << "\nUsing Overloaded << Operator m: " << m << "\n";

	return 0;
}
/* End of Main Function */