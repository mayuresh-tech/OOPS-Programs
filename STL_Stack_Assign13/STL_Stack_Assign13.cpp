
//Stack using STL///
#include<iostream>
#include<stack>
#include<string.h>
#include<cstdlib>

using namespace std;

int main()
{
	stack<int>st;
	int ch, item;

	while (1)
	{
		cout << "\n--------------------------------\n";
		cout << "\nStack Implementation using STL\n";
		cout << "1.Insert element into the stack\n2.Delete element from the stack";
		cout << "\n3.Size of stack\n4.Top element of the stack\n5.Exit\n";
		cout << "Enter your choice: ";
		cin >> ch;
		switch (ch)
		{
			case 1: 
				cout << "\nEnter element to be inserted: ";
				cin >> item;
				st.push(item);
				break;

			case 2: 
				item = st.top();
				st.pop();
				cout << "\nElement" << item << "Deleted \n" << endl;
				break;

			case 3: 
				cout << "\nSize of the Stack: " << endl;
				cout << st.size();
				break;

			case 4: cout << "Top element of the stack: ";
				cout << st.top();
				break;

			case 5:
				exit(1);

			default: 
				cout << "Wrong Choice\n";
		}
	}
	return 0;
}
