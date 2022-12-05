#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int ans = 0;

	while (n != 0) {
		int r = n % 10;
		if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
			return true;
		}
		ans = (ans * 10) + r;
		n = n / 10;
	}

	return 0;
}