#include "Header.h"
#include <iomanip>
#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void Array::filling(int index,int value) //Filling of the array
{
	array[index] = value;
}
int Array::getValue(int index) //Getting the value of array
{
	return array[index]; 
}
int Array::correct() // Part of the silly sort
{
	int lengthcopy = length;
	while (--lengthcopy > 0)
		if (array[lengthcopy - 1] > array[lengthcopy])
			return 0;
	return 1;
}
void Array::shuffle() // Part of the silly sort
{
	for (int i = 0; i < length; ++i)
		swap(array[i], array[(rand() % length)]);
}
void Array::BogoSort() //Silly sort
{
	while (!correct())
		shuffle();
}
void Array::quicksort(int first, int last) //QuickSort
{
	int mid, count;
	int f = first, l = last;
	mid = array[(f + l) / 2];
	do
	{
		while (array[f] < mid) f++;
		while (array[l] > mid) l--;
		if (f <= l)
		{
			count = array[f];
			array[f] = array[l];
			array[l] = count;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) quicksort(first, l);
	if (f < last) quicksort(f, last);
}
void Array::BinarySearch(int key) //BinarySearch
{
	bool flag = false;
	int l = 0;
	int r = length - 1;
	int mid;
	while ((l <= r) && (flag != true))
	{
		mid = (l + r) / 2;
		if (array[mid] == key) flag = true;
		if (array[mid] > key) r = mid - 1;
		else l = mid + 1;
	}
	if (flag) cout << "Index of element " << key << " in array is equal to: " << mid <<endl;
	else cout << "Sorry, but there is no such an element in array" <<endl;
}
void Char_Array::CountingSort() //Counting sort
{
	int* output = new int[length];
	int* count = new int[length];
	int max = 0;
	int tmp = 0;
	int tmp2 = 0;
	int tmp3 = 0;
	for (int i = 1; i < length; i++)
	{
		tmp = array[i] - '0';
		if (tmp > max)
		{
			max = tmp;
		}
	}
	for (int i = 0; i <= max; ++i)
	{
		count[i] = 0;
	}
	for (int i = 0; i < length; i++)
	{
		count[array[i] - '0']++;
	}
	for (int i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	for (int i = length - 1; i >= 0; i--)
	{
		output[count[array[i] - '0'] - 1] = array[i] - '0';
		count[array[i] - '0']--;
	}
	for (int i = 0; i < length; i++)
	{
		array[i] = output[i] + '0';
	}
}
void Array::InsertionSort() //InsertionSort
{
	int key = 0, temp = 0;
	for (int i = 0; i < length - 1; i++)
	{
		key = i + 1;
		temp = array[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (temp < array[j - 1])
			{
				array[j] = array[j - 1];
				key = j - 1;
			}
		}
		array[key] = temp;
	}
}
void Array::randfilling() //Random filling of the array
{
	int temp;
	for (int i = 0; i < length; i++)
	{
		temp = rand() % 2;
		if (temp == 0)
		{
			array[i] = (rand() % 10)*(-1);
		}
		else
			array[i] = rand() % 10;
	}
}
void Char_Array::filling(int index, char value) //Filling of the array
{
	array[index] = value + '0';
}
char Char_Array::getValue(int index) //Getting the value of array
{
	return array[index];
}
void Char_Array::randfilling() // Random filling of the char array
{
	int temp;
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 10 + '0';
	}
}