#include "pch.h"
#include "CppUnitTest.h"
#include <stdexcept>
#include "../Aistrd2Lab/Header.h"
#include "C:\Users\Никита\source\repos\Aistrd2Lab\Aistrd2Lab\functions.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		int arrlength;

		TEST_METHOD_INITIALIZE(setUp)
		{
			arrlength = 10;
		}

		TEST_METHOD_CLEANUP(cleanUP)
		{

		}

		TEST_METHOD(quick_sort)
		{
			Array test(arrlength);
			int test_fill[10] = { 1,2,3,4,5,6,7,8,9,10 };

			for (int i = 0; i < arrlength; i++)
			{
				test.filling(i, test_fill[i]);
			}

			Array arr(arrlength);
			int test_arr[10] = { 7,3,2,1,5,4,6,8,10,9 };

			for (int i = 0; i < arrlength; i++)
			{
				arr.filling(i, test_arr[i]);
			}

			arr.quicksort(0, 9);

			for (int i = 0; i < arrlength; i++)
			{
				Assert::AreEqual(arr.getValue(i), test.getValue(i));
			}

		}

		TEST_METHOD(insertion_sort)
		{
			Array test(arrlength);
			int test_fill[10] = { 1,2,3,4,5,6,7,8,9,10 };

			for (int i = 0; i < arrlength; i++)
			{
				test.filling(i, test_fill[i]);
			}

			Array arr(arrlength);
			int test_arr[10] = { 7,3,2,1,5,4,6,8,10,9 };

			for (int i = 0; i < arrlength; i++)
			{
				arr.filling(i, test_arr[i]);
			}

			arr.InsertionSort();

			for (int i = 0; i < arrlength; i++)
			{
				Assert::AreEqual(arr.getValue(i), test.getValue(i));
			}

		}

		TEST_METHOD(bogo_sort)
		{
			Array test(arrlength);
			int test_fill[10] = { 1,2,3,4,5,6,7,8,9,10 };

			for (int i = 0; i < arrlength; i++)
			{
				test.filling(i, test_fill[i]);
			}

			Array arr(arrlength);
			int test_arr[10] = { 7,3,2,1,5,4,6,8,10,9 };

			for (int i = 0; i < arrlength; i++)
			{
				arr.filling(i, test_arr[i]);
			}

			arr.BogoSort();

			for (int i = 0; i < arrlength; i++)
			{
				Assert::AreEqual(arr.getValue(i), test.getValue(i));
			}

		}

		TEST_METHOD(counting_sort)
		{
			Char_Array test(arrlength);
			int test_fill[10] = { 1,2,3,4,5,6,7,8,9,10 };

			for (int i = 0; i < arrlength; i++)
			{
				test.filling(i, test_fill[i] + '0');
			}

			Char_Array arr(arrlength);
			int test_arr[10] = { 7,3,2,1,5,4,6,8,10,9 };

			for (int i = 0; i < arrlength; i++)
			{
				arr.filling(i, test_arr[i] + '0');
			}

			arr.CountingSort();

			for (int i = 0; i < arrlength; i++)
			{
				Assert::AreEqual(arr.getValue(i), test.getValue(i));
			}

		}

	};
}
