#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int temp = n;
	long ans = 0;

	while (n > 0) {
		int r = n % 10;
		ans = ( ans * 10 ) + r;
		n = n / 10;
	}

	if (ans < 0) {
		return false;
	}

	if (ans == temp)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}