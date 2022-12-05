// Time Complexity : O(n)
// Space Complexity : O(1)
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

	int min = arr[0], max = arr[0], minCount = 0, maxCount = 0;

	int i = 1;
	while (i < n) {

		if (arr[i] < min) {
			min = arr[i];
			minCount++;
		}
		else if (arr[i] > max) {
			max = arr[i];
			maxCount++;
		}
		i++;
	}

	cout << maxCount << " " << minCount << endl;
	delete [] arr;
	return 0;
}