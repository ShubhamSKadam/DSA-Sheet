#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr, int start, int end) {

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void leftRotate(int *arr, int n, int d) {
	if (d == 0) {
		return;
	}

	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);

}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int d;
	cin >> d;

	leftRotate(arr, n, d);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	delete [] arr;

	return 0;
}