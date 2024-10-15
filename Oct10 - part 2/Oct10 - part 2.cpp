// Oct10 - part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 

int main()
{
	//for (long long i = 0; i < 10'000'000'000; ++i)
	//{
	//	//cout << i << "\n";
	//}

	//putting a loop within another loop ("nested loops") 

	for (int column = 1; column < 5; ++column)
	{
		for (int row = 1; row < 6; ++row)
		{
			cout << "Value of COLUMN (the \"outer loop counter\" = " << column 
				<< " and the value of row is : " << row << "\n";
			//cout << column * row << " ";

			//break 
			//	continue 
		}
		cout << "\n";
	}

	//while ()
	//{
	//	while ()
	//	{

	//	}
	//}
}
