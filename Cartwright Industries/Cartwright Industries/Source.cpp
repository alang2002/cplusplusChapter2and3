#include <iostream>
using namespace std;

int main()
{
	double weeklyPay;
	double taxRate = 32.00;
	double weeklyCosts;

	cout << "Enter your weekly gross pay: ";
	cin >> weeklyPay;

	taxRate = taxRate / 100;
	weeklyCosts = weeklyPay * taxRate;
	weeklyPay = weeklyPay - weeklyCosts;

	cout << "Your weekly net pay is: $" << weeklyPay << endl;

	system("pause");
	return 0;
}