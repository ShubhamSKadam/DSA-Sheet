#include<bits/stdc++.h>
using namespace std;
bool checkLeap(int x) {

	if (x % 400 == 0)
		return true;


	if (x % 100 == 0)
		return false;


	if (x % 4 == 0)
		return true;

	return false;
}
int main() {

	int year;
	cin >> year;

	int leapDays = 12;
	int nonLeapDays = 13;

	// Check if it lies between Julian or Gregorian Calendar
	if (year >= 1700 && year <= 1917) {
		if (year % 4 == 0) {
			cout << leapDays << ".09." << year << endl;
		}
		else {
			cout << nonLeapDays << ".09." << year << endl;
		}
	}
	else if (year >= 1919 && year <= 2700) {
		if (checkLeap(year)) {
			cout << leapDays << ".09." << year << endl;
		}
		else {
			cout << nonLeapDays << ".09." << year << endl;
		}
	}
	else if (year == 1918) {
		cout << "26" << ".09." << year << endl;
	}
	return 0;
}