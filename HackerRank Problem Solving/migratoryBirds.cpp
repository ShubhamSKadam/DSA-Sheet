// Bruteforce Approach
// Time Complexity : O(n^2)
// Space Complexity : O(1);
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	// edge case;
	if (n < 5) {
		cout << "0" << endl;
		return 0;
	}

	int maxCount = 0;
	int index = -1;
	for (int i = 0; i < n - 1; i++) {
		int count = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}
		if (count > maxCount && maxCount != count) {
			maxCount = count;
			index = i;
		}
	}
	cout << arr[index] << " ";
	cout << endl;
	delete [] arr;
	return 0;
}