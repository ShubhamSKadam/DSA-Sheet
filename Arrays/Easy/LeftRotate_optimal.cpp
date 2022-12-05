#include<bits/stdc++.h>
using namespace std;
void leftRotate(int *arr, int n, int k) {
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
	leftRotate(arr, n, k);

	delete [] arr;
	return 0;
}