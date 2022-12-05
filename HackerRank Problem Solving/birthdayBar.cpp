// Time Complexity : O(n*12)== O(n); ( value of m can be max 12)
// Space Complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int d, m;
	cin >> d >> m;

	// edge case;
	if (m > d) {
		cout << "0" << endl;
		return 0;
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < m; j++) {
			sum += arr[j];
		}
		m++;

		if (sum == d)
			count++;
	}

	cout << count << endl;
	delete [] arr;
	return 0;
}