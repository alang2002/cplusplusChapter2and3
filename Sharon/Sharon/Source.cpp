#include <iostream>
using namespace std;

int main()
{
	int numberOfPaychecks = 24;
	double percentageDeposited;
	int bonusDeposit = 100;
	int amountPerPaycheck;
	int grossPay;
	int totalDeposited;

	cout << "How much do you recieve per paycheck? ";
	cin >> amountPerPaycheck;
	grossPay = numberOfPaychecks * amountPerPaycheck;
	cout << "You have $" << grossPay << " in your bank account." << endl;
	cout << "What percentage of your gross pay would you like to deposit into your savings account? ";
	cin >> percentageDeposited;

	percentageDeposited = percentageDeposited / 100;
	totalDeposited = percentageDeposited * grossPay;

	cout << "The total amount in your savings account now is: $" << totalDeposited << "." << endl;

	system("pause");
	return 0;
}