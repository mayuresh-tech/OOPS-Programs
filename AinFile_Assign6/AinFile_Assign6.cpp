/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 6 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header File */
#include<fstream>
#include<string>
#include<iostream>

/* Defining namesapce */
using namespace std;

/* Main Function */
int main()
{
	int count = 0;
	string line;

	ifstream reader("story.txt");

	if (!reader)
	{
		cout << "Error opening input file";
		return -1;
	}

	while (1)
	{
		getline(reader, line);
		if (reader.eof())
		{
			break;
		}
		else
		{
			if (line[0] == 'a' || line[0] == 'A')
				count++;
		}
	}

	cout << "\n Count of A = " << count;
	reader.close();
	
	return 0;
}
/* End of Main Function */
