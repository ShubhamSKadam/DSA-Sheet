#include<bits/stdc++.h>
using namespace std;
void linearSearch(int *arr, int n, int x) {

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x) {
			cout << "Element found" << endl;
			return;
		}
	}
	cout << "Element not found" << endl;
}
int main() {

	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};

	int x;
	cin >> x;
	linearSearch(arr, sizeof(arr) / sizeof(int), x);

	return 0;
}