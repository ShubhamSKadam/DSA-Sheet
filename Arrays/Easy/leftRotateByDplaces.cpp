#include<bits/stdc++.h>
using namespace std;
void rotateArrayRight(int *arr, int n, int k) {
	int start = (n - k) % n;
	for (int i = start; i < start + n; i++) {
		cout << arr[i % n] << " ";
	}
	cout << endl;
}
void rotateArrayLeft(int *arr, int n, int k) {

	for (int i = k; i < k + n; i++) {
		cout << arr[i % n] << " ";
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

	string side;
	cin >> side;

	if (side == "right")
		rotateArrayRight(arr, n, k);
	else
		rotateArrayLeft(arr, n, k);

	delete [] arr;
	return 0;
}