#include<iostream>
using namespace std;
int main()
{
	int choice;
	do
	{
		cout << "Menu" << endl;
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			double x, y;
			cout << "sum=(x+y)" << endl;
			break;
		}
		case 2:
		{
			double x, y;
			cout << "sub=(x-y)" << endl;
			break;
		}
		case 3:
			cout << "Exit program";
			break;
		default:
			cout << "INVALID choice";
		}

	} while (choice != 3);
	return 0;
}
