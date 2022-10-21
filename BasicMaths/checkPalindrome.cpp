#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n) {

	int temp = n;
	int ans = 0;
	while (n != 0) {
		int r = n % 10;
		ans = ans * 10 + r;
		n = n / 10;
	}

	if (ans == temp)
		return true;
	else
		return false;
}
int main() {

	int n;
	cin >> n;

	cout << isPalindrome(n) << endl;

	return 0;
}