/*
Matt Price - 4
Take in Data
Taking in Data
*/
//Libraries
#include <iostream> 
#include <conio.h>
//Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	 ; while (!_kbhit());
	_getch();
	cout << '\n';
}

//Main
void main() {
	//Variables
	int age; // How old are you in years?
	char first_initial; // What is the first letter of your first name?
	double money; // Got M's?
	double myBankAccount = 99999999999.98; // $99999999999.98
	bool you_gots_mo_money; // Do you have more money than me?

	// User Queries
	cout << "What is your age in years ? : ";
	cin >> age;
	cout << "What is the first letter of your first name? : ";
	cin >> first_initial;
	cout << "How many M's do you have in your bank account? : ";
	cin >> money;
	you_gots_mo_money = money > myBankAccount;

	// After questions print out stored data
	cout << "Wow you are " << age << " I thought you were... older." << endl;
	cout << "Your first letter was " << first_initial << " mine is M. \n";
	cout << "Wow you have a lot of M's " << money << " in ya bank account ma dude" << '\n';
	if (you_gots_mo_money); {
		cout << "What is your bank account number? : ";
	}

	pause();
}