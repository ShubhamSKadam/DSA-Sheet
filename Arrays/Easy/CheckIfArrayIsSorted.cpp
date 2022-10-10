#include<bits/stdc++.h>
using namespace std;
bool IsSorted(vector<int>& arr) {


	for (int i = 0; i < arr.size() - 1; ++i)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}
int main() {


	int n;
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	cout << IsSorted(arr) << endl;
	// int *arr = new int[n];
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> arr[i];
	// }

	// cout << IsSorted(arr, n) << endl;


	// delete [] arr;
	// return 0;
}