#include<bits/stdc++.h>
using namespace std;
// Second method
int largest_2(int *arr, int n) {
	int max = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
// First method
int largest(int *arr, int n) {
	sort(arr, arr + n);
	return arr[n - 1];
}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << largest_2(arr, n) << endl;

	delete [] arr;
	return 0;
}