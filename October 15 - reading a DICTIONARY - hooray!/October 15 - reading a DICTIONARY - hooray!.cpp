// October 15 - reading a DICTIONARY - hooray!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream> 

#include<string> 

using std::cout; 
using std::ifstream; 
using std::getline; 

int main()
{

	ifstream fin{ "C:/Users/Work/Downloads/dictionaryWords.txt" };

	if (!fin.is_open())
	{
		cout << "FNFE\n";
		return -1; 
	}
	//so far (before we knew about using LOOPS), we have only been able to read a SINGLE line from a file 
	
	int numberOfWords = 0; 
	int numberOfWords_withLengthGreaterThan15 = 0; 

	while (!fin.eof()) //eof is an acronym meaning "end of file"  -> remember ! means not 
	{
		std::string currentWord; 
		getline(fin, currentWord);
		numberOfWords++; 

		if (currentWord.length() > 15 && currentWord[0] == 'a')
		{
			numberOfWords_withLengthGreaterThan15++; 
			cout << currentWord << "\n";
		}
		//cout << currentWord << "\n";
	}

	cout << "Total number of words read in from file: " << numberOfWords << "\n";
	cout << "total number of LONG words: " << numberOfWords_withLengthGreaterThan15 << "\n";


	fin.close(); 

}
