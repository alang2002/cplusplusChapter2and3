#include <iostream>
using namespace std;

int main()
{
	double tempAt8;
	double tempAt12;
	double tempAt5;
	double temp8Cel;
	double temp12Cel;
	double temp5Cel;

	cout << "Enter the temperature at 8:00 AM: ";
	cin >> tempAt8;
	
	cout << "Enter the temperature at 12:00 PM: "; 
	cin >> tempAt12;

	cout << "Enter the temperature at 5:00 PM: ";
	cin >> tempAt5;

	temp8Cel = (tempAt8 - 32) / 1.8;
	temp12Cel = (tempAt12 - 32) / 1.8;
	temp5Cel = (tempAt5 - 32) / 1.8;

	cout << "The temperature at 8:00 AM was " << temp8Cel << " in Celsius, and " << tempAt8 << " in Fahrenheit." << endl;
	cout << "The temperature at 12:00 PM was " << temp12Cel << " in Celsius, and " << tempAt12 << " in Fahrenheit." << endl;
	cout << "The temperature at 5:00 PM was " << temp5Cel << " in Celsius, and " << tempAt5 << " in Fahrenheit." << endl;

	system("pause");
	return 0;
}