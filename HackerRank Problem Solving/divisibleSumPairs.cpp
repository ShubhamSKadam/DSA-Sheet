// Time Complextity : O(n^2);
// Space Complexity : O(1);
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

	int k;
	cin >> k;

	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((arr[i] + arr[j]) % k == 0) {
				count++;
			}
		}
	}

	cout << count << endl;

	delete [] arr;
	return 0;
}