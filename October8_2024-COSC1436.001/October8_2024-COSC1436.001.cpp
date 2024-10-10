
#include <iostream>
using std::cout; 

int main()
{
	//while (somethingIsTrue)
	//do some stuff 
	//how long does it take a C++ program ON MY MACHINE to count to 1 billion? 
	//int counter = 1; 

	//while (counter < 1'000'000'000)
	//{
	//	//counter = counter + 1; 
	//	counter++;  //this is "shorthand" 

	//	if (counter % 500'000 == 0)
	//	{
	//		cout << counter << "\n";
	//	}
	//}

	//cout << "....Done!\n What a fast machine!\n";
	//Suppose you have 100 buckaroos in your bank account and go to the grocery store ...
	//double accountBalance = 100.00; 

	//double amountSpentSoFar = 0.00; 

	//do
	//{

	//} while (); 
	//while (true)
	//{

	//}
	//while (amountSpentSoFar <= accountBalance)
	//{
	//	double costOfCurrentItem; 
	//	cout << "How much does the current item that you are going to buy cost? \n";
	//	std::cin >> costOfCurrentItem; 


	//	//amountSpentSoFar = amountSpentSoFar + costOfCurrentItem; 
	//	//if (amountSpentSoFar > accountBalance)
	//	//{
	//	//	break; 
	//	//}
	//}

	//cout << "You have spent all of your money - don't overdraw\n";
	//for(int i = 0; i < 10; i++)
	//srand(time(0)); 

	
	//char choice = '0';
	////until 
	//while (choice != 'q')
	//{
	//	cout << "enter your choice:\n";
	//	std::cin >> choice; 
	//}

	//"irregular looping" 
	//int dayCount = 0; 

	//while (dayCount <= 30 ) //the "loop counter variable" 
	//{
	//	cout << "Exercise - it is day number " << dayCount << "\n";
	//	//dayCount = dayCount + 3; //incrementing by 3 
	//	dayCount--; //decrement operation (decrease the increment) 
	//}

	int powerOf2 = 1; 
	while (powerOf2 <= 1024) //1 K - > as in 1KB of RAM 
	{
		//powerOf2 = powerOf2 * 2; 
		powerOf2 *= 2; 
		cout << "Power of 2 variable got updated to: " << powerOf2 << "\n";
	}

	//"semicolon happy"
	//if (); 
	//while (); NO semicolon!



}
