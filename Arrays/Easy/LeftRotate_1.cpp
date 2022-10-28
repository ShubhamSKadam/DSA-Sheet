#include<bits/stdc++.h>
using namespace std;
void preprocess(int *arr, int *temp, int n) {

	for (int i = 0; i < n; i++) {
		temp[i] = arr[i];
		temp[i + n] = arr[i];
	}
}
void leftRotate(int *arr, int *temp, int n, int k) {

	int start = k % n;

	for (int i = start; i < start + n; i++) {
		cout << temp[i] << " ";
	}
	cout << endl;
}
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

	int *temp = new int[2 * n];
	preprocess(arr, temp, n);

	leftRotate(arr, temp, n, k);

	delete [] arr;
	delete [] temp;

	return 0;
}