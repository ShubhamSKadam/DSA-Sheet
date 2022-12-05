// The Bruteforce approach will be using a Hash set
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int *arr, int n) {
	set <int> numSet;

	for (int i = 0; i < n; i++) {
		numSet.insert(arr[i]);
	}

	int k = numSet.size();
	int j = 0;
	for (int x : numSet) {
		arr[j++] = x;
	}
	return k;
}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k = removeDuplicates(arr, n);
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete [] arr;
}