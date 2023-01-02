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

	// find the prefix sum;
	vector<int> prefix(n, 0);
	int prefix_sum = 0;

	prefix[0] = arr[0];
	for (int i = 0; i < n; ++i)
	{
		prefix[i] = prefix[i - 1] + arr[i];
	}

	// Input queries
	int q;
	cin >> q;

	while (q--) {
		int l, r;
		cin >> l >> r;

		cout << prefix[r] - prefix[l - 1] << endl;
	}

	delete [] arr;
	return 0;
}