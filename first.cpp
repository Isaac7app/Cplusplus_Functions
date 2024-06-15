#include <iostream>

using namespace std;

int myAdditionFunction(int a, int b);

int askUser1();

int askUser2();

void printRespond(int first, int second);

void askAndAddUserNumber();



int main() 
{
	// Asks user to enter two numbers, adds and print it out
	askAndAddUserNumber();

	return 0;
}


int myAdditionFunction(int a, int b) 
{
	// Adds the two integers from the user
	return a + b;
}

int askUser1() 
{
	// Asks the user to enter some nubers of choices 
	cout << "Enter first number : " << endl;

	int firstNumber;
	cin >> firstNumber;

	return firstNumber;
}

int askUser2()
{
	// Asks the user to enter another nubers of choices 
	cout << "Enter second number : " << endl;

	int secondNumber;
	cin >> secondNumber;

	return secondNumber;

}


void printRespond(int first, int second) 
{
	// This function uses the addition function and print the answer to the user
	cout << "The addition of both your numbers: " << myAdditionFunction(first, second) << endl;
	if (first > second)
	{
		cout << "Your first number was huuge than the second" << endl;
	}
	else
	{
		cout << "Your second number was a big one" << endl;
	}
	
}

void askAndAddUserNumber()
{
	// Last of the refactoring, puts all the fuctions into one function and makes it more tidy on the Main.

	int firstRespond = askUser1();
	int secondRespond = askUser2();

	printRespond(firstRespond, secondRespond);
}


