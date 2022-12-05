#include<bits/stdc++.h>
using namespace std;
void SecondLargest(int *arr, int n) {
	if (n == 0 || n == 1) {
		cout << "-1" << endl;
	}

	sort(arr, arr + n);
	cout << "The second Largest element is " << arr[n - 2] << " " << " The second Smallest is " << arr[1] << endl;
}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	SecondLargest(arr, n);

	return 0;
}