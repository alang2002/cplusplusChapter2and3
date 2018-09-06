#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int aOfBurritos;
	int aOfTacos;
	int aOfChurros;
	int aOfEnchiladas;
	int aOfNachos;
	double burritoPrice = 1.00;
	double tacoPrice = 0.50;
	double churroPrice = 1.15;
	double enchiladaPrice = 1.25;
	double nachosPrice = 1.40;
	double totalCost;
	double totalCostWithTax;
	double tax = 0.06;

	cout << "******************" << endl;
	cout << "*                *" << endl;
	cout << "*                *" << endl;
	cout << "*                *" << endl;
	cout << "*                ********" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl;
	cout << "*   *               *   *" << endl;
	cout << "*****               *****" << endl;
	cout << "   /Delgados Tacos\\    " << endl;

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Hello " << name << ". Here are our items and prices: " << endl;
	cout << "Burritos: $1.00    " << "Tacos: $0.50" << endl;
	cout << "Churros:  $1.15    " << "Enchiladas: $1.25" << endl;
	cout << "Nachos:   $1.40" << endl;


	cout << "How many burritos would you like? ";
	cin >> aOfBurritos;
	cout << "How many tacos would you like? ";
	cin >> aOfTacos;
	cout << "How many churros would you like? ";
	cin >> aOfChurros;
	cout << "How many enchiladas would you like? ";
	cin >> aOfEnchiladas;
	cout << "How many plates of nachos would you like? ";
	cin >> aOfNachos;

	totalCost = (aOfBurritos * burritoPrice) + (aOfTacos * tacoPrice) + (aOfChurros * churroPrice) + (aOfEnchiladas * enchiladaPrice)
		+ (aOfNachos * nachosPrice);
	totalCostWithTax = (totalCost * tax) + totalCost;

	cout << name << ", your total is $" << totalCost << ", and after tax (6%) it is now $" << totalCostWithTax << ". Thank you for"
		<< " choosing Delgados Tacos!" << endl;

	system("pause");
	return 0;
}