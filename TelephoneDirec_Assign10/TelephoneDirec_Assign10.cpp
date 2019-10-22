/*.....................................INPUT......................................................................................*/
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Tel
{
public:
	char name[30];
	long long int mob;
};

int main()
{
	int n, flag = 0;
	char nk[30], ch, ans;long long int num;

	cout << "\n Enter how many numbers you want to store: ";
	cin >> n;

	Tel t[100];

	ofstream outfile;
	ifstream infile;

	do
	{
		cout << "\n1. Store telephone database";
		cout << "\n2. Display telephone database";
		cout << "\n3. Search Name in telephone database";
		cout << "\n4. Search Number in telephone database";
		cout << "\n5. Replace Number in telephone database";
		cout << "\n Enter your choice : ";
		cin >> ch;

		switch (ch)
		{
		case '1':
			outfile.open("tel.txt", ios::out);

			for (int i = 0;i < n;i++)
			{
				cout << "\n Enter name: ";
				cin >> t[i].name;
				cout << "\n Enter Mobile number: ";
				cin >> t[i].mob;
				outfile.write((char*)&t[i], sizeof(t[i]));
			}
			outfile.close();
			break;

		case '2':
			infile.open("tel.txt", ios::in);
			for (int i = 0;i < n;i++)
			{
				infile.read((char*)&t[i], sizeof(t[i]));
				cout << t[i].name << "\t";
				cout << t[i].mob << "\n";
			}
			infile.close();
			break;

		case '3':
			cout << "\n Enter name to search: ";
			cin >> nk;

			infile.open("tel.txt", ios::in);
			for (int i = 0;i < n;i++)
			{
				infile.read((char*)&t[i], sizeof(t[i]));
				if (!strcmp(nk, t[i].name))
				{
					cout << "\n Record found\n";
					cout << t[i].name << "\t";
					cout << t[i].mob << "\n";
					flag = 1;
					//break;
				}
			}
		if (flag == 0)
		{
			cout << "\n Record not found";
		}
		infile.close();
		break;

		case '4':
			cout << "\n Enter no to search name: ";
			cin >> num;
			infile.open("tel.txt", ios::in);
			for (int i = 0;i < n;i++)
			{
				infile.read((char*)&t[i], sizeof(t[i]));
				if (t[i].mob == num)
				{
					cout << "\n Record found";
					cout << t[i].name << "\t";
					cout << t[i].mob << "\n";
					flag = 1;
					//  break;
				}
			}
			if (flag == 0)
			{
				cout << "\n Record not found";
			}
			break;

		case '5':
			cout << "\n Enter Old no:  ";
			cin >> num;

			Tel temp;
			cout << "\n Enter new no:  ";
			cin >> temp.mob;
			infile.open("tel.txt", ios::in);
			outfile.open("teltemp.txt", ios::out);
			for (int i = 0;i < n;i++)
			{
				infile.read((char*)&t[i], sizeof(t[i]));
				if (t[i].mob == num)
				{

					strcpy(temp.name, t[i].name);
					outfile.write((char*)&temp, sizeof(temp));
					cout << "\n Record written";
				}
				else
				{
					outfile.write((char*)&t[i], sizeof(t[i]));
				}
			}

			infile.close();
			outfile.close();
			infile.open("teltemp.txt", ios::in);
			for (int i = 0;i < n;i++)
			{
				infile.read((char*)&t[i], sizeof(t[i]));
				cout << t[i].name << "\t";
				cout << t[i].mob << "\n";
			}
			infile.close();
			break;
	}
	cout << "\nWant to continue (y/n): ";
	cin >> ans;
}while (ans == 'y' || ans == 'Y');

return 0;
}
