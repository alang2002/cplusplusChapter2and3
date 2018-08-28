#include <iostream>
#include <string>
using namespace std;

int main()
{
	double britishConv = .6318;
	double mexicanConv = 12.8863;
	double japaneseConv = 82.34;
	double americanInput;

	cout << "Please enter the amount you wish to convert (in American dollars): ";
	cin >> americanInput;

	cout << "British: " << americanInput * britishConv << endl;
	cout << "Mexican: " << americanInput * mexicanConv << endl;
	cout << "Japanese: " << americanInput * japaneseConv << endl;

	system("pause");
	return 0;
}