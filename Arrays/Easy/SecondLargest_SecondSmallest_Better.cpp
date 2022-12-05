// The time complexity of this code is O(n);
#include<bits/stdc++.h>
using namespace std;
void getElements(int *arr, int n) {
	if (n == 0 || n == 1) {
		cout << "-1" << endl;
		return;
	}

	int small = INT_MAX;
	int large = INT_MIN;

	for (int i = 0; i < n; i++) {
		small = min(small, arr[i]);
		large = max(large, arr[i]);
	}

	int second_small = INT_MAX;
	int second_large = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < second_small && arr[i] != small) {
			second_small = arr[i];
		}
		if (arr[i] > second_large && arr[i] != large) {
			second_large = arr[i];
		}
	}
	cout << "Second Largest is " << second_large << endl;
	cout << "Second Smallest is " << second_small << endl;

}
using namespace std;
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	getElements(arr, n);
	return 0;
}