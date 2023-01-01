// TC : O(n)
// SC : O(1);
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x) {
			cout << "Element found at index " << i << endl;
			return 0;
		}
	}
	cout << "Element not found" << endl;
	return -1;
	delete [] arr;


}