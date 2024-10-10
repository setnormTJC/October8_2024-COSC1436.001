// Oct10 - continuing loop stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

int main()
{
	//int whileLoopCounter = 0; 
	
	//while (whileLoopCounter < 100) //"off by one" error and "edge cases"
	//{
	//	whileLoopCounter++;
	//	cout << "while loop counter: " << whileLoopCounter << "\n";

	//}
	//cout << "\n";

	//for (double multipleOfPi = 3.14; multipleOfPi < 100.00; multipleOfPi = multipleOfPi * 2)
	//{
	//	cout << "Multiple of pi is: " << multipleOfPi << "\n";
	//}

	//for (int i = 0; i < 10; ++i) //integers are often used for arrays (a particular "data structure")
	//for (char letter = 'a'; letter != 'z'; ++letter)
	//{
	//	cout << letter << "\n";
	//}

	srand(time(0)); 

	//for (int i = 0; i < 100; ++i)
	//{
	//	int randomNumber = rand() % 100; //rand is actually "bad" and considered "deprecated" 
	//	
	//	//std::uniform_int_distribution<int> 
	//	cout << randomNumber << "\n";
	//}

	//Queen: Play the game
	int randomNumber = rand() % 100;
	//cout << "Random number is: " << randomNumber << "\n"; //dirty cheater!

	int guessedNumber = -1; 

	int numberOfGuesses = 0; 

	while (guessedNumber != randomNumber && numberOfGuesses < 10)
	{
		cout << "Guess the number:\n";
		std::cin >> guessedNumber; 
		numberOfGuesses++; 

		if (guessedNumber > randomNumber)
		{
			cout << "Your guess was too HI\n"; //high low (HI-LO) 
		}

		else if (guessedNumber < randomNumber)
		{
			cout << "Too low!\n";
		}

		else//this means the guessNumber == randomNumber
		{
			cout << "Correct!\n";
		}
	}

	if (numberOfGuesses >= 10)
	{
		cout << "Too many guesses! Loser\n";
	}

	else
	{
		cout << "Winnah, winnah chicken dinnah!\n";
	}
	//while ()
}
