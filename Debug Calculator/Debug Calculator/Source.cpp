#include <iostream>
#include <string>
using namespace std;

int main()
{

	int aFirst, bSecond, cAdd, dSubtract, eDivide, fMultiply, gRemainder;
	string nameString;
	cout << "What is your name: ";
	cin >> nameString;

	cout << "Enter a number: ";
	cin >> aFirst;

	cout << "Enter a second number: ";
	cin >> bSecond;

	cAdd = aFirst + bSecond;
	dSubtract = aFirst - bSecond;
	eDivide = aFirst / bSecond;
	fMultiply = aFirst * bSecond;
	gRemainder = aFirst % bSecond;

	cout << "The sum is " << aFirst << " and " << bSecond << " = " << cAdd << endl;
	cout << "The subtraction is " << aFirst << " and " << bSecond << " = " << dSubtract << endl;
	cout << "The divided is " << aFirst << " and " << bSecond << " = " << eDivide << endl;
	cout << "The mulitiply " << aFirst << " and " << bSecond << " = " << fMultiply << endl;
	cout << "The remainder is " << aFirst << " and " << bSecond << " = " << gRemainder << endl;

	system("pause");
	return 0;
}