#include "Header.h"
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
void main()
{
	List* list1 = new List;
	List* list2 = new List;
	while (true)
	{
	start:
		cout << "=====================================\n";
		cout << "Choose action (write 1 to 14 number):\n";
		cout << "1. adding to the top of the list\n"
			<< "2. adding to the end of the list\n"
			<< "3. deleting the first element\n"
			<< "4. deleting the last element\n"
			<< "5. adding an item by index\n"
			<< "6. getting an item by index\n"
			<< "7. deleting an item by index\n"
			<< "8. getting the list size\n"
			<< "9. output list items to the console\n"
			<< "10. deleting all list items\n"
			<< "11. replacing an element by index with the passed element\n"
			<< "12. checking if the list is empty\n"
			<< "13. checking for the content of the list2 in the list1\n"
			<< "14. close the program\n";
		int issue, list, value, index;
		cin >> issue;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		switch (issue)
		{
		case 1:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter value of the new element: \n";
			cin >> value;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				list1->push_front(value);
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if (list == 2)
			{
				list2->push_front(value);
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else 
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 2:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter value of the new element: \n";
			cin >> value;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				list1->push_back(value);
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if (list == 2)
			{
				list2->push_back(value);
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 3:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				list1->pop_front();
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if (list == 2)
			{
				list2->pop_front();
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 4:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				list1->pop_back();
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if (list == 2)
			{
				list2->pop_back();
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 5:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter value of the new element: \n";
			cin >> value;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter index of element: \n";
			cin >> index;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (index < 0)
			{
				cout << "Wrong index.\n\n";
				goto start;
			}
			if ((list == 1) && (index < list1->get_size()))
			{
				list1->insert(index, value);
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if ((list == 2) && (index < list2->get_size()))
			{
				list2->insert(index, value);
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list or index.\n\n";
			}
			goto start;
		}
		case 6:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter index of element: \n";
			cin >> index;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if ((list == 1) && (index < list1->get_size()) && list1->get_size() > 0 && index >-1)
			{
				cout << "Element with choosen index: " << list1->at(index);
				cout << endl;
			}
			else if ((list == 2) && (index < list2->get_size()) && list2->get_size()>0 && index > -1)
			{
				cout << "Element with choosen index: " << list2->at(index);
				cout << endl;
			}
			else
			{
				cout << "Wrong list or index.\n\n";
			}
			goto start;
		}
		case 7:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter index of element: \n";
			cin >> index;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if ((list == 1) && (index < list1->get_size()))
			{
				list1->remove(index);
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if ((list == 2) && (index < list2->get_size()))
			{
				list2->remove(index);
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list or index.\n\n";
			}
			goto start;
		}
		case 8:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				cout << "List 1 size: " << list1->get_size();
				cout << endl;
			}
			else if (list == 2)
			{
				cout << "List 2 size: " << list2->get_size();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 9:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				cout << "List 1: ";
				list1->print_to_console();
				cout << endl;
			}
			else if (list == 2)
			{
				cout << "List 2: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n";
			}
			goto start;
		}
		case 10:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				list1->clear();
				cout << "List 1 was cleared.\n";
			}
			else if (list == 2)
			{
				list2->clear();
				cout << "List 2 was cleared.\n";
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 11:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter value of the new element: \n";
			cin >> value;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Enter index of element for change: \n";
			cin >> index;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if ((list == 1) && (index < list1->get_size()))
			{
				list1->set(index, value);
				cout << "List 1 after change: ";
				list1->print_to_console();
				cout << endl;
			}
			else if ((list == 2) && (index < list2->get_size()))
			{
				list2->set(index, value);
				cout << "List 2 after change: ";
				list2->print_to_console();
				cout << endl;
			}
			else
			{
				cout << "Wrong list.\n\n";
			}
			goto start;
		}
		case 12:
		{
			cout << "Choose List to work with (1 or 2): \n";
			cin >> list;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			if (list == 1)
			{
				if (list1->isEmpty() == true)
				{
					cout << "List 1 is not empty.";
					cout << endl;
				}
				else
				{
					cout << "List 1 is empty.";
					cout << endl;
				}
			}
			else if (list == 2)
			{
				if (list2->isEmpty() == true)
				{
					cout << "List 2 is not empty.";
					cout << endl;
				}
				else
				{
					cout << "List 2 is empty.";
					cout << endl;
				}
			}
			else
			{
				cout << "Wrong list.\n";
			}
			goto start;
		}
		case 13:
		{
			if (list1->contains(*list2) == 1)
			{
				cout << "List 1 contains List2.";
				cout << endl;
			}
			else
			{
				cout << "List 1 doesn`t contain List2.";
				cout << endl;
			}
			goto start;
		}
		case 14:
		{
			delete list1;
			delete list2;
			exit(0);
		}
		default:
		{
			cout << "Error. Enter the number 1 to 14" << endl;
			goto start;
		}
		}
		}
	}