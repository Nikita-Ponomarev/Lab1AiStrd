#pragma once
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
class Node
{
	int piece;
	class Node* next;
	friend class List;
};
class List
{
	Node* head;
	Node* last;
	Node* current;
	int count = 0;
public:
	List() { head = NULL; last = head; current = head; }
	~List()
	{
		cout << "The destructor has finished deleting the specified elements." << endl;
	}
	void push_front(int num);
	void insert(int, int);
	void push_back(int num);
	void print_to_console();
	void pop_back();
	void remove(int);
	int at(int position);
	void set(int, int);
	void pop_front();
	size_t get_size();
	bool isEmpty();
	void clear();
	bool contains(List l2);
};
