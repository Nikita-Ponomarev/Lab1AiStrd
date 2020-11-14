#include "Header.h"
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
//adding to the top of the list
void List::push_front(int num)
{
	Node* elem = new Node();
	elem->piece = num;
	count++;
		if (head == NULL)
		{
			elem->next = NULL;
			head = elem;
			last = head;
		}
		else
		{
			elem->next = head;
			head = elem;
		}
}
//adding to the end of the list
void List::push_back(int num)
{
	Node* elem = new Node();
	elem->piece = num;
	count++;
	if (head == NULL)
	{
		elem->next = NULL;
		head = elem;
		last = head;
	}
	else
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		elem->next = NULL;
		current->next = elem;
		last = current;
	}
}
//output list items to the console
void List::print_to_console()
{
	current = head;
	cout << "|";
	while (1)
	{
		if (count == 0)
		{
			cout << "NULL|";
			break;
		}
		cout << current->piece << "|";
		current = current->next;
		if (current == NULL)
		{
			cout << "\n";
			break;
		}
	}
}
//deleting the first element
void List::pop_front()
{
	if (count == 0)
		return;
	current = head;
	head = head->next;
	current->next = NULL;
	delete current;
	count--;
}
//deleting the last element
void List::pop_back()
{
	if (count == 0)
		return;
	last = head;
	current = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	if (current != last)
	{
		while (current->next != last)
		{
			current = current->next;
		}
		last->next = NULL;
		delete last;
		current->next = NULL;
		last = current;
	}
	else
	{
		delete current;
	}
	count--;
}
//adding an item by index
void List::insert(int index, int num)
{
	Node* elem = new Node();
	elem->piece = num;
	count++;
	current = head;
	if (index == 0)
	{
		if (head == NULL)
		{
			elem->next = NULL;
			head = elem;
			last = head;
		}
		else
		{
			elem->next = head;
			head = elem;
		}
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
		{
			current = current->next;
		}
		elem->next = current->next;
		current->next = elem;
	}
}
//getting an item by index
int List::at(int index)
{
	current = head;
	for (int i = 0; i < index; i++)
	{
		current = current->next;
	}
	return current->piece;
}
//deleting an item by index
void List::remove(int index)
{
	if (count > 0)
	{
		current = head;
		if (index == 0)
		{
			current = head;
			head = head->next;
			current->next = NULL;
			delete current;
		}
		else if (index == count-1)
		{
			if (count == 0)
				return;
			last = head;
			current = head;
			while (last->next != NULL)
			{
				last = last->next;
			}
			if (current != last)
			{
				while (current->next != last)
				{
					current = current->next;
				}
				last->next = NULL;
				delete last;
				current->next = NULL;
				last = current;
			}
			else
			{
				delete current;
			}
		}
		else
		{
			for (int i = 0; i < index; i++)
			{
				current = current->next;
			}
			last = current->next;
			current->next = last;
			delete last;
		}
		count--;
	}
}
//getting the list size
size_t List::get_size()
{
	return count;
}
//deleting all list items
void List::clear()
{
	for (int j = 0; j < count; j++)
	{
		current = head;
		head = head->next;
		current->next = NULL;
		delete current;
	}
	count = 0;
}
//replacing an element by index with the passed element
void List::set(int index, int value)
{
	current = head;
	for (int i = 0; i < index; i++)
	{
		current = current->next;
	}
	Node* elem = new Node();
	elem->piece = value;
	current->piece = elem->piece;
	elem->next = NULL;
	delete elem;
}
//checking for the content of the list2 in the list1
bool List::contains(List list2)
{
	current = head;
	list2.current = list2.head;
	if (current == NULL)
	{
		return 1;
	}
	if (list2.current == NULL)
	{
		return 1;
	}
	while (true)
	{
		if (count > list2.count || count == list2.count)
		{
			while (true)
			{
				if (current == NULL)
				{
					return 0;
				}
				if (current->piece == list2.current->piece)
				{
					if (current->piece != list2.current->piece)
					{
						return 0;
					}
					while (current != NULL)
					{
						if (list2.current == NULL)
						{
							return 1;
						}
						if (current->piece != list2.current->piece)
						{
							return 0;
						}
						current = current->next;
						list2.current = list2.current->next;
					}
					return 1;
				}
				else
				{
					current = current->next;
				}
			}
		}
		else
		{
			while (true)
			{
				if (list2.current == NULL)
				{
					return 0;
				}
				if (list2.current->piece == current->piece)
				{
					if (list2.current->piece != current->piece)
					{
						return 0;
					}
					while (list2.current != NULL)
					{
						if (current == NULL)
						{
							return 1;
						}
						if (list2.current->piece != current->piece)
						{
							return 0;
						}
						current = current->next;
						list2.current = list2.current->next;
					}
					return 1;
				}
				else
				{
					list2.current = list2.current->next;
				}
			}
		}
	}
}
//checking if the list is empty
bool List::isEmpty()
{
	return (count != 0);
}