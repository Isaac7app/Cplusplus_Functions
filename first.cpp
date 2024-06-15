#include <iostream>

using namespace std;

int myAdditionFunction(int a, int b);
int askUser1();
int askUser2();
void printRespond(int first, int second);



int main() 
{

	int firstRespond = askUser1();
	int secondRespond = askUser2();

	printRespond(firstRespond, secondRespond);


	return 0;
}


int myAdditionFunction(int a, int b) 
{
	if (a > b)
	{
		cout << "Your first number was huuge than the second" << endl;
	}
	else
	{
		cout << "Your second number was a big one" << endl;
	}
	return a + b;

}

int askUser1() 
{
	cout << "Enter first number : " << endl;

	int firstNumber;
	cin >> firstNumber;

	return firstNumber;
}

int askUser2()
{
	cout << "Enter second number : " << endl;

	int secondNumber;
	cin >> secondNumber;

	return secondNumber;

}


void printRespond(int first, int second) 
{
	cout << "The addition of both your numbers: " << myAdditionFunction(first, second) << endl;
	
}


