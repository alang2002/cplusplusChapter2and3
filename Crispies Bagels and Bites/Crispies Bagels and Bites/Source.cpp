#include <iostream>
using namespace std;

int main()
{
	int nOfBagels;
	int nOfDonuts;
	int nOfCoffees;
	double bagelCost = 0.99;
	double donutCost = 0.75;
	double coffeeCost = 1.20;
	double totalCost;

	cout << "How many bagels would you like? ";
	cin >> nOfBagels;
	cout << "How many donuts would you like? ";
	cin >> nOfDonuts;
	cout << "How many cups of coffee would you like? ";
	cin >> nOfCoffees;

	totalCost = (nOfBagels * bagelCost) + (nOfDonuts * donutCost) + (nOfCoffees * coffeeCost);
	cout << "Your total cost is: $" << totalCost << "." << endl;

	system("pause");
	return 0;
}