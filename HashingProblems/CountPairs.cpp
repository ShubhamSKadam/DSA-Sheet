#include<bits/stdc++.h>
using namespace std;
void countPairs(int *arr, int n, int k) {

	int count = 0;
	unordered_map<int, int> frequency;
	for (int i = 0; i < n; ++i)
	{
		int diff = k - arr[i];
		if (frequency.find(diff) != frequency.end()) {
			count += frequency[diff];
			frequency[arr[i]]++;
		}
		else
			frequency[arr[i]]++;
	}
	cout << count << endl;
}
int main() {
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k;
	cin >> k;
	countPairs(arr, n, k);
	delete [] arr;
}