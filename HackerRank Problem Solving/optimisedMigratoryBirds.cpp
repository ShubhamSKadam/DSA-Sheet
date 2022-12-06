// Time Complexity : O(logN);
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;


	if (n < 5) {
		cout << "0" << endl;
		return 0;
	}

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[arr[i]]++;
	}

	int max = 0;
	int maxCount = 0;
	for (auto x : mp) {
		if (x.second > maxCount) {
			maxCount = x.second;
			max = x.first;
		}
	}

	cout << max << endl;
	delete [] arr;

	return 0;
}