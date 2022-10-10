#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<int>& arr, int k) {

	vector<int> temp(arr.size());
	for (int i = 0; i < arr.size(); ++i)
	{
		temp[(i + k) % arr.size()] = arr[i];
	}

	// copy elements from temp back to the original array
	arr = temp;
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

	int k;
	cin >> k;
	rotateArray(arr, k);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}