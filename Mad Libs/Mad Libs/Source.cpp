#include <iostream>
#include <string>
using namespace std;

string color;
string wordEnding;
string bodyPartPlural;
string animal;
string noun;
string pluralNoun;

int a = 86;
int b = 55;
int c = a - b;

int main()
{
	cout << "Enter a color: ";
	cin >> color;
	cout << "Enter a word ending in 'est': ";
	cin >> wordEnding;
	cout << "Enter a plural body part: ";
	cin >> bodyPartPlural;
	cout << "Enter an animal: ";
	cin >> animal;
	cout << "Enter a noun: ";
	cin >> noun;
	cout << "Enter a plural noun: ";
	cin >> pluralNoun;

	cout << "The " << color << " Dragon is the " << wordEnding << " Dragon of all. It has " << c << " " << bodyPartPlural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat "
		<< pluralNoun << ", although it will feast on nearly anything." << endl;


	system("pause");
	return 0;
}