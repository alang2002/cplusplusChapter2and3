#include <iostream>
using namespace std;

double conversion(double fahrenheitTemp)
{
	double inCelsius = (fahrenheitTemp - 32) / 1.8;
	return inCelsius;
}

int main()
{
	double tempAt8;
	double tempAt12;
	double tempAt5;

	cout << "Enter the temperature at 8:00 AM: ";
	cin >> tempAt8;
	
	cout << "Enter the temperature at 12:00 PM: "; 
	cin >> tempAt12;

	cout << "Enter the temperature at 5:00 PM: ";
	cin >> tempAt5;

	cout << "The temperature at 8:00 AM was " << conversion(tempAt8) << " in Celsius, and " << tempAt8 << " in Fahrenheit." << endl;
	cout << "The temperature at 12:00 PM was " << conversion(tempAt12) << " in Celsius, and " << tempAt12 << " in Fahrenheit." << endl;
	cout << "The temperature at 5:00 PM was " << conversion(tempAt5) << " in Celsius, and " << tempAt5 << " in Fahrenheit." << endl;

	system("pause");
	return 0;
}