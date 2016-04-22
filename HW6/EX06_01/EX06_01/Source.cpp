////////////////////////
//Program Name: EX06_01
//Name: Marika Witt
//Date: 4/14/16
//Class: 172-1
////////////////////////

#include <iostream>
#include <string>
using namespace std;

//Function to match elements in array to user-given elements
template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		//If numbers/strings match, return item
		if (key == list[i]) 
			return i;
	}
	return -1;
}

int main()
{
	//Different types of lists to ensure T works
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	double list2[] = { 1.0, 7.2, 3.1, 8.2, 9.9, 10.2 };
	string list3[] = { "Honolulu", "New York", "Seattle", "Los Angeles", "Washington D.C."};

	//User-given numbers/strings
	int i = linearSearch(list, 4, 8);
	int j = linearSearch(list2, 7.2, 6);
	string s = "Seattle";
	int k = linearSearch(list3, s, 5);

	//Displays location of each element
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;
}