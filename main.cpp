#include "Header.h"
#include <iomanip>
#include <iostream>
#include <locale>
#include <chrono>
#include <cstdlib>
using namespace std;
int main()
{
	/*for (int i = 0; i < 10; i++)
	{
		int arrlength = 100000;
		int value;
		Array arr(arrlength);
		arr.randfilling();
		chrono::system_clock::time_point start = chrono::system_clock::now();
		arr.InsertionSort();
		chrono::system_clock::time_point end = chrono::system_clock::now();
		chrono::duration<double> sec = end - start;
		cout << "the execution time of the function is " << sec.count() << " seconds" << endl;
		cout << "=====================================\n";
	}*/
	while (true)
	{
	start:
		int arrlength;
		int value;
		cout << "Fill in the size of array" << endl;
		cin >> arrlength;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		if (arrlength < 1)
		{
			cout << "Wrong array length" << endl; //Exception
			goto start;
		}
		Array arr(arrlength); 
		cout << "Choose method of the filling (1 - random filling, 2 - manually filling):" << endl;
		int choose;
		cin >> choose;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		if (choose == 1)
		{
			arr.randfilling();
		}
		else if (choose == 2)
		{
			cout << "Fill in the array" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cin >> value;
				arr.filling(i, value);
			}
		}
		else
		{
			cout << "Wrong method\n"; //Exception
			goto start;
		}
		cout << "=====================================\n";
		cout << "Array after filing:" << endl;
		for (int i = 0; i < arrlength; i++)
		{
			cout << arr.getValue(i) << " ";
		}
		cout << endl;
		cout << "=====================================\n";
	choosing:
		cout << "-------------------------------------\n";
		cout << "Choose action (write 1 to 7 number):\n";
		cout << "1. BinarySearch (int)\n"
			<< "2. QuickSort (int)\n"
			<< "3. InsertionSort (int)\n"
			<< "4. BogoSort (int)\n"
			<< "5. CountingSort (char)\n"
			<< "6. Refill the array\n"
			<< "7. Close the program\n";
		cout << "-------------------------------------\n";
		int issue;
		cin >> issue;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		switch (issue)
		{
		case 1:
		{
			cout << "Enter the searching number\n";
			int key;
			cin >> key;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			arr.BinarySearch(key);
			goto choosing;
		}
		case 2:
		{
			int first = 0;
			int last = arrlength - 1;
			chrono::system_clock::time_point start = chrono::system_clock::now();
			arr.quicksort(first, last);
			chrono::system_clock::time_point end = chrono::system_clock::now();
			chrono::duration<double> sec = end - start;
			cout << "the execution time of the function is " << sec.count() << " seconds" << endl;
			cout << "=====================================\n";
			cout << "Array after QuickSort:" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cout << arr.getValue(i) << " ";
			}
			cout << endl;
			cout << "=====================================\n";
			goto choosing;
		}
		case 3:
		{
			chrono::system_clock::time_point start = chrono::system_clock::now();
			arr.InsertionSort();
			chrono::system_clock::time_point end = chrono::system_clock::now();
			chrono::duration<double> sec = end - start;
			cout << "the execution time of the function is " << sec.count() << " seconds" << endl;
			cout << "=====================================\n";
			cout << "Array after InsertionSort:" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cout << arr.getValue(i) << " ";
			}
			cout << endl;
			cout << "=====================================\n";
			goto choosing;
		}
		case 4:
		{
			chrono::system_clock::time_point start = chrono::system_clock::now();
			arr.BogoSort();
			chrono::system_clock::time_point end = chrono::system_clock::now();
			chrono::duration<double> sec = end - start;
			cout << "the execution time of the function is " << sec.count() << " seconds" << endl;
			cout << "=====================================\n";
			cout << "Array after BogoSort:" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cout << arr.getValue(i) << " ";
			}
			cout << endl;
			cout << "=====================================\n";
			goto choosing;
		}
		case 5:
		{
		again:
			cout << "Fill in the size of char array" << endl;
			cin >> arrlength;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (arrlength < 2)
			{
				cout << "Wrong array length" << endl; //Exception
				goto again;
			}
			Char_Array arrC(arrlength);
			cout << "Choose method of the filling (1 - random filling, 2 - manually filling):" << endl;
			int choose;
			cin >> choose;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (choose == 1)
			{
				arrC.randfilling();
			}
			else if (choose == 2)
			{
				cout << "Fill in the char array" << endl;
				for (int i = 0; i < arrlength; i++)
				{
					cin >> value;
					arrC.filling(i, value);
				}
			}
			else
			{
				cout << "Wrong method\n"; //Exception
				goto again;
			}
			cout << "=====================================\n";
			cout << "Char array after filing:" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cout << arrC.getValue(i) << " ";
			}
			cout << endl;
			cout << "=====================================\n";
			chrono::system_clock::time_point start = chrono::system_clock::now();
			arrC.CountingSort();
			chrono::system_clock::time_point end = chrono::system_clock::now();
			chrono::duration<double> sec = end - start;
			cout << "the execution time of the function is " << sec.count() << " seconds" << endl;
			cout << "=====================================\n";
			cout << "Array after CountingSort:" << endl;
			for (int i = 0; i < arrlength; i++)
			{
				cout << arrC.getValue(i) << " ";
			}
			cout << endl;
			cout << "=====================================\n";
			goto choosing;
		}
		case 6:
		{
			goto start;
		}
		case 7:
		{
			goto end;
		}
		default:
		{
			cout << "Error. Enter the number 1 to 7" << endl; //Exception
			goto choosing;
		}
		}
	}
end:
	cout;
}