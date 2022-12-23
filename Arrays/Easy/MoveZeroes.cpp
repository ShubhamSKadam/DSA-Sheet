// TC : O(n)
// SC : O(1)
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(int *arr, int n) {

	// finding first occurence of zero
	int k = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			k = i;
			break;
		}
	}

	if (k < 0)
		return;

	// finding zeroes and immediate non-zero elements and
	// swapping them
	int i = k, j = k + 1;
	while (j < n) {
		if (arr[j] != 0) {
			swap(arr[i], arr[j]);
			i++;
		}
		j++;
	}
}

int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	moveZeroes(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	delete [] arr;

	return 0;
}