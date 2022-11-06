#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int *arr, int n) {

	int i = 0, j = 1;
	while (j < n || i > j) {

		if (arr[i] == arr[j] || i == j)
			j++;

		else {
			i++;
			if (i != j)
				arr[i] = arr[j];
		}
	}
	return i + 1;
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
	delete [] arr;

	return 0;
}