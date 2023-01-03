// TC : O(n)
// SC : O(n)
#include<bits/stdc++.h>
using namespace std;
int maxDistance(int *arr, int n) {

	unordered_map<int, int> firstOcc;

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (firstOcc.find(arr[i]) != firstOcc.end()) {
			int distance = abs(firstOcc[arr[i]] - i);
			if (distance > max)
				max = distance;
		}
		else
			firstOcc[arr[i]] = i;
	}
	return max;
}
int main() {
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << maxDistance(arr, n) << endl;

	delete [] arr;
}