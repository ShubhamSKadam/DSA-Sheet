// LeetCode Problem 268. (url : https://leetcode.com/problems/missing-number/)
// TC : O(n)
// SC : O(n)
#include<bits/stdc++.h>
using namespace std;
void missingNumber(int *arr, int n) {
	vector<int> temp(n + 1, 0);
	for (int i = 0; i < n; i++) {
		temp[arr[i]]++;
	}

	for (int i = 0; i < n + 1; ++i)
	{
		if (temp[i] == 0) {
			cout << i << endl;
		}
	}
}
int main() {
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	missingNumber(arr, n);
	delete [] arr;
}