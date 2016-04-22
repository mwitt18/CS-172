/////////////////////////
//Program Name: EX06_04
//Name: Marika Witt
//Date: 4/19/16
//Class: 172-1
////////////////////////

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Function to shuffle numbers
template <typename T>
void shuffle(vector<T> &v)
{
	//Random functions
	srand(time(0));

	for (int i = 0; i < v.size(); i++)
	{
		//Generate index randomly
		int index = rand() % v.size();
		int temp = v[i];
		v[i] = v[index];
		v[index] = temp;
	}
}

int main()
{
	//Initialize number of cards in deck
	const int number_of_elements = 10;

	//Create vector deck
	vector<int>deck(number_of_elements);

	//Initialize deck
	for (int i = 0; i < number_of_elements; i++)
		deck[i] = i;

	//Executes shuffle
	shuffle(deck);
	for (int i = 0; i < 10; i++)
		cout << deck[i] % 10 << endl;
}