#pragma once
#include <iomanip>
#include <iostream>
#include <locale>
using namespace std;
class Array
{
	int* array;
	int length;

public:
	Array(int arrlength) // constructor
	{
		array = new int[arrlength];
		length = arrlength;
	}
	~Array() // destructor
	{
		delete[] array;
		cout << "\ndestructor has finished his work" << endl;
	}
	void filling(int, int);
	int getValue(int);
	void BogoSort();
	void shuffle();
	int correct();
	void quicksort(int, int);
	void BinarySearch(int);
	void InsertionSort();
	void randfilling();
};
class Char_Array
{
	char* array;
	int length;

public:
	Char_Array(int arrlength) // constructor
	{
		array = new char[arrlength];
		length = arrlength;
	}
	~Char_Array() // destructor
	{
		delete[] array;
		cout << "\ndestructor has finished his work" << endl;
	}
	void CountingSort();
	void filling(int, char);
	char getValue(int index);
	void randfilling();
};