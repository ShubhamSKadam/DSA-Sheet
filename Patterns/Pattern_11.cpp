#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n; i++) {

		int space = i <= n ? n - i : i - n - 1;
		for (int k = 1; k <= space ; k++)
			cout << " ";

		int col = i <= n ? i : 2 * n - i + 1;
		for (int j = 1; j <= col; j++)
			cout << "*" << " ";

		cout << endl;
	}
	return 0;
}