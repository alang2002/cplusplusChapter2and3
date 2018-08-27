#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string name;

	int firstNum;
	int secondNum;

	int sum;
	int difference;
	int product;
	int quotient;
	int remainder;

	cout << "What is your name? ";
	cin >> name;

	cout << "Please enter your first number: ";
	cin >> firstNum;

	cout << "Please enter your second number: "; 
	cin >> secondNum;

	sum = firstNum + secondNum;
	difference = firstNum - secondNum;
	product = firstNum * secondNum;
	quotient = firstNum / secondNum;
	remainder = firstNum % secondNum;

	cout << "The sum of " << firstNum << " and " << secondNum << " = " << sum << endl;
	cout << "The difference of " << firstNum << " and " << secondNum << " = " << difference << endl;
	cout << "The product of " << firstNum << " and " << secondNum << " = " << product << endl;
	cout << "The quotient of " << firstNum << " and " << secondNum << " = " << quotient << endl;
	cout << "The remainder of " << firstNum << " and " << secondNum << " = " << remainder << endl;


	system("pause");
	return 0;
}