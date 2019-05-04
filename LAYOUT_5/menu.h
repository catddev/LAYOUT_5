#pragma once
#include "Vector.h"

template <typename T>
void menu(Vector<T> obj);

template <typename T>
void menu(Vector<T> obj)
{
	int x, y;
	while (true) {
		int choice;
		cout << " Enter 1 to " << endl;
		cout << " Enter 2 to " << endl;
		cout << " Enter 3 to " << endl;
		cout << " Enter 4 to " << endl;
		cout << " Enter 5 to " << endl;

		cout << " Enter 0 to exit" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		}
	}
}