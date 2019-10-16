/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 12 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include <iostream>
#include <deque>
#include <string>
#include <cstdlib>

/* Defining namespace */
using namespace std;

/* Main Function */
int main()
{
	deque<int> dq;
	deque<int>::iterator it;
	int ch, item;

	while (1)
	{
		cout << "\n***************************************" << endl;
		cout << " \t   Dequeue in STL" << endl;
		cout << "***************************************" << endl;
		cout << "\n1.Insert Element at the End" << endl;
		cout << "2.Insert Element at the Front" << endl;
		cout << "3.Delete Element at the End" << endl;
		cout << "4.Delete Element at the Front" << endl;
		cout << "5.Front Element at Dequeue" << endl;
		cout << "6.Last Element at Dequeue" << endl;
		cout << "7.Size of the Dequeue" << endl;
		cout << "8.Display Dequeue" << endl;
		cout << "9.Exit" << endl;

		cout << "\n Enter your Choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n Enter value to be inserted at the end: ";
			cin >> item;
			dq.push_back(item);
			break;

		case 2:
			cout << "\n Enter value to be inserted at the front: ";
			cin >> item;
			dq.push_front(item);
			break;

		case 3:
			item = dq.back();
			dq.pop_back();
			cout << "\n Element " << item << " deleted" << endl;
			break;

		case 4:
			item = dq.front();
			dq.pop_front();
			cout << "\n Element " << item << " deleted" << endl;
			break;

		case 5:
			cout << "\n Front Element of the Dequeue: ";
			cout << dq.front() << endl;
			break;

		case 6:
			cout << "\n Back Element of the Dequeue: ";
			cout << dq.back() << endl;
			break;

		case 7:
			cout << "\n Size of the Dequeue: " << dq.size() << endl;
			break;

		case 8:
			cout << "\n Elements of Dequeue:  ";
			for (it = dq.begin(); it != dq.end(); it++)
				cout << *it << "  ";
			cout << endl;
			break;

		case 9:
			exit(1);
			break;

		default:
			cout << "\n Enter correct choice" << endl;
		}
	}
	return 0;
}
/* End of Main Function */
