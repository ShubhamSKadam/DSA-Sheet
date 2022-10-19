#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int *arr, int n) {

	int k = 0;
	for (int i = 1; i < n; i++) {

		if (arr[i - 1] == arr[i]) {
			arr[i - 1] = arr[i];
			k++;
		}
	}
	return k;
}
int main() {


	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int k = removeDuplicates(arr, n);
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}