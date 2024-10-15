// October15 - MORE file reading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream> 

#include<string> 

using std::cout;
using std::ifstream;
using std::getline;


int main()
{
	ifstream fin{ "Text.txt" };

	if (!fin.is_open())
	{
		cout << "FNFE\n";
		return -1;
	}

	int lineCount = 0; 
	//getting the first FIVE lines 
	cout << "THe first FIVE lines are: \n";
	for (int i = 0; i < 5; ++i)
	{
		std::string currentToken; 
		fin >> currentToken; 

		cout << currentToken << "\n";

		lineCount++; 
	}

	cout << "The REMAINING lines of the file:\n";
	fin.seekg(std::ios::beg);
	while (!fin.eof())
	{
		std::string currentToken;
		fin >> currentToken;

		cout << currentToken << "\n";

		lineCount++;
	}
	
	cout << "Total number of lines: " << lineCount << "\n";
}
