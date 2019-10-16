
//Queue using STL///
#include<iostream>
#include<queue>
#include<string.h>
#include<cstdlib>
using namespace std;

int main()
{
	queue<int>q;
	int ch, item;

	while (1)
	{
		cout << "\n--------------------------------\n";
		cout << "\nQueue Implementation using STL\n";
		cout << "1.Insert element into the queue\n2.Delete element from the queue";
		cout << "\n3.Size of queue\n4.Front element of the queue\n5.Last element of the queue\n6.Exit\n";
		cout << "Enter your choice:";
		cin >> ch;
		switch (ch)
		{
		case 1: cout << "\nEnter element to be inserted:";
			cin >> item;
			q.push(item);
			break;

		case 2: item = q.front();
			q.pop();
			cout << "\nElement " << item << " deleted \n";
			break;

		case 3: cout << "\nSize of the Queue:";
			cout << q.size();
			break;

		case 4: cout << "Top element of the Queue:";
			cout << q.front();
			break;

		case 5: cout << "Last element of the Queue:";
			cout << q.back();
			break;

		case 6:exit(1);

		default: cout << "Wrong Choice\n";
		}
	}
	return 0;
}
