#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) {
		int col = i > n ? 2 * n - i : i;
		for (int j = 1; j <= col; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}
	return 0;
}