#include <iostream>
using namespace std;

int main()
{
	int eggsWanted;
	int eggsDozenAmount;
	int eggsRemaining;
	double dozenCost = 2.00;
	double singleCost = 0.25;
	double total;

	cout << "How many eggs do you want? ";
	cin >> eggsWanted;

	eggsDozenAmount = eggsWanted / 12;
	eggsRemaining = eggsWanted % 12;
	total = (eggsDozenAmount * dozenCost) + (eggsRemaining * singleCost);

	cout << "You ordered " << eggsDozenAmount << " dozen eggs and " << eggsRemaining << " individual eggs." << endl;
	cout << "Your total is: $" << total << endl;


	system("pause");
	return 0;
}