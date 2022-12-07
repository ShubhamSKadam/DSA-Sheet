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

	map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[arr[i]]++;
	}

	int count = 0;
	for (auto x : mp) {
		count += x.second / 2;
	}

	cout << count << endl;
	delete [] arr;

	return 0;
}