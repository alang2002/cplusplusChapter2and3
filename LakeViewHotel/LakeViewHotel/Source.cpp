#include <iostream>
#include <string> 
using namespace std;

double totalCharge(int nStayed, int mOnPhone)
{
	int perNightRate = 100;
	double chargePerMin = 0.25;
	double total = (nStayed * perNightRate) + (mOnPhone * chargePerMin);
	return total;
}


int main()
{
	string name;
	int nightsStayed;
	int minutesOnTelephone;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "How many nights did you stay? ";
	cin >> nightsStayed;
	cout << "How many minutes did you spend talking on the telephone? ";
	cin >> minutesOnTelephone;

	cout << name << ", your total is $" << totalCharge(nightsStayed, minutesOnTelephone) << "." << endl;

	system("pause");
	return 0;
}