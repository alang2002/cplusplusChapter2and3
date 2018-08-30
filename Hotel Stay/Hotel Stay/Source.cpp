#include <iostream>
#include <string>
using namespace std;

int main()
{
	double roomCharge = 120.0;
	double internetCharge = 9.99;
	double totalBill;
	int daysStayed = 0;
	string name = "";

	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Enter the amount of days you will be staying: ";
	cin >> daysStayed;

	totalBill = (internetCharge * daysStayed) + (roomCharge * daysStayed);
	cout << "*****************************" << endl;
	cout << name << "," << endl;
	cout << "You stayed " << daysStayed << " days." << endl;
	cout << "Your total bill is: " << endl;
	cout << "$" << totalBill << endl;
	cout << "*****************************" << endl;

	system("pause");
	return 0;
}