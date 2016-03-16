/////////////////////////////////
//Name: Marika Witt
//Program Name: Check Palindrome
//Date: 3/12/16
//Class Section: 172-1
////////////////////////////////


#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string word;
	//Prompt user to enter a word
	cout << "Enter a word or series of letters: ";
	cin >> word;
	//Initialize isPalindrome so that it's true; may change later in program
	bool isPalindrome = true;

	//Declare a stack variable called "palindrome"
	stack<char> palindrome;

	//Loop to push the letters of the word once checked
	for (int i = 0; i < word.size(); i++)
	{
		palindrome.push(word[i]);
	}

	//Loop to pop the last letter if it equals the first letter of the word
	for (int j = 0; j < word.size(); j++)
	{
		if (palindrome.top() == word[j])
			palindrome.pop();
		else
		{
			isPalindrome = false; //If it doesn't equal the first letter, then it is not a palindrome
		}
	}

	//If the loop goes all the way through, display that the word is a palindrome
	if (isPalindrome == true)
		cout << "Your word is a palindrome!" << endl;
	//If the loop does not go all the way through, display that the word is not a palindrome
	else
		cout << "Your word is not a palindrome." << endl;
}
