#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 2; i++) {

		int space = i > n ? i - n : n - i - 1;
		for (int k = 1; k <= space ; k++) {
			cout << " ";
		}
	}

	return 0;
}