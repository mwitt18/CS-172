//////////////////////////
//Program Name: EX06_02
//Name: Marika Witt
//Date: 04/18/16
//Class: 172-1
/////////////////////////

#include <iostream>
#include <string>
using namespace std;

//Function to check whether items are in order
template <typename T>
bool isSorted(const T list[], int size)
{
	//Loop to figure out minimum value
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i];
		int currentMinIndex = i;

		//Nested loop to compare mins to other values
		for (int j = i + 1; j < size; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}
		//If current minimum doesn't equal value
		if (currentMinIndex != i)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	//User-created arrays and elements
	int list1[] = { 3, 5, 1, 0, 2, 8, 7 };
	cout << isSorted(list1, 7) << endl;

	double list2[] = { 0.4, 1, 2.8, 3, 5, 9 };
	cout << isSorted(list2, 6) << endl;

	string list3[] = { "Apple", "Dog", "Climate", "Duck" };
	cout << isSorted(list3, 4) << endl;

	return 0;
}