// Writing to an OUTPUT file using a loop!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream> 

using std::cout; 
using std::ofstream; 

int main()
{
	ofstream fout{ "out.txt" };
	int i = 0; 
	while (i < 1'000'000)
	{
		fout << "a";
		++i; //danger, Will Robinson!
	}

	fout.close(); 
}
