#include<bits/stdc++.h>
using namespace std;
int main() {


	int n;
	cin >> n;

	for (int i = n; i >= 1; i--) {
		int counter = 1;
		for (int j = i; j >= 1; j--) {
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}
	return 0;
}