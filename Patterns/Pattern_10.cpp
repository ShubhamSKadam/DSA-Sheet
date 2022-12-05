#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = n; i >= 1; i--) {

		int space = n - i;
		for (int k = 1; k <= space; k++) {
			cout << " ";
		}

		int col = 2 * i - 1;
		for (int j = 1; j <= col; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
