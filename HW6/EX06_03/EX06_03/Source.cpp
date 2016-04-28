//////////////////////////
//Program Name: EX06_03
//Name: Marika Witt
//Date: 04/18/16
//Class: 172-1
//////////////////////////

#include <iostream>
#include "vector.h"
using namespace std;

//No-default constructor
template <typename T>
vector<T>::vector()
{
	size1 = 0;
}

//Default constructor
template <typename T>
vector<T>::vector(int size)
{
	buffer = new T[size];
}

template <typename T>
vector<T>::vector(int size, T defaultValue)
{
	buffer = new T[size];

	for (int i = 0; i < size; i++)
	{
		buffer[i] = defaultValue;
	}
	count++;
}

//Pushes first element to back
template <typename T>
void vector<T>::push_back(T element)
{
	buffer[count] = element;
	count++; //Increments array
}

//Takes off one element at the end
template <typename T>
void vector<T>::pop_back()
{
	buffer[count] = NULL;
	count--; //Decrements array
}

//Returns size of vector
template <typename T>
unsigned const vector<T>::size()
{
	return count;
}

//Returns where specified number is at in vector
template <typename T>
T const vector<T>::at(int index)
{
	return buffer[index];
}

//Returns whether vector is empty or not
template <typename T>
bool const vector<T>::empty()
{
	if (buffer[0] == NULL) //Returns true if nothing is at location 0
		return true;
	else
		return false;
}

//Deletes vector
template <typename T>
void vector<T>::clear()
{
	delete[] buffer;
	// Joseph: Nice work here, but what if I want to use the vector again after I clear it?
	//         To fix this problem, you could reinitialize the buffer to an empty array
}

//Swaps two arrays
template <typename T>
void vector<T>::swap(vector v2)
{
	//Initialize vectors
	T array[50];
	T array2[50];

	//Swaps two arrays
	int temp;
	temp = array[5];
	array[5] = array2[5];
	array2[5] = temp;
	
	//Displays swapped values
	cout << "Array 1 elements is: " << array[5] << endl;
	cout << "Array 2 elements is: " << array2[5] << endl;
}


int main()
{
	//Calls pushback function
	vector<int> v1(10, 5);
	vector<int> v2(14, 2);

	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}

	//Displays the new array
	for (int i = 0; i < 10; i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//Calls popback function
	v1.pop_back();

	//Displays the new array
	for (int i = 0; i < 10; i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//Show vector size
	cout << v1.size() << endl;

	//Show vector index
	cout << v1.at(5) << endl;

	//Is the vector empty? T/F
	cout << v1.empty() << endl;

	//Swap function
	v1.swap(v2);
}