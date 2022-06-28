#include "pch.h"
#include "CppUnitTest.h"
#include "../bubblesort/bubblesort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(InputTestMethod1)
		{
			int i;
			int Array[] = { 1, 5, 8, 7, 7 };
			int size = sizeof(Array);
			Input(Array, 5);
			Assert::IsTrue(5 == size);
		}
	};
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(InputTestMethod2)
		{
			int Array[] = { 1,5,8,7,7 };
			Input(Array, 5);
			int x = Array[0];
			Assert::IsTrue(1 == x);
		}
	};

	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(SortTestMethod3)
		{
			int i;
			int Array[] = { 1,5,8,7,7 };
			int SortArray[] = { 1,5,7,7,8 };
			const unsigned int count = 5;
			Input(Array, count);
			for (int i = 0; i < count; i++)
			{
			Assert::IsTrue(SortArray[i] <= SortArray[i + 1]);}
		}
	};


	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(SortTestMethod4)
		{
			BubbleSort B;
			const unsigned int count = 5;
			int Array[count] = { 5, 3, 10, 2, 7 };
			int SortArray[count] = { 2, 3, 5, 7, 10 };

			B.bubble_sort(Array, count);
			for (int i = 0; i < count; i++)
			{
				Assert::AreEqual(SortArray[i], Array[i]);
			}

		};
	};
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(SortTestMethod5)
		{
			BubbleSort B;
			const unsigned int count = 5;
			int Array[count] = { 3, 3, 3, 3, 3 };
			int SortedArray[count] = { 3, 3, 5, 3, 3 };
			B.bubble_sort(Array, count);
			for (int i = 0; i < count; i++)
			{
				Assert::AreEqual(SortedArray[i], Array[i]);
			}
		};
	};
}
