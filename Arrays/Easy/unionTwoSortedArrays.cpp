#include<bits/stdc++.h>
using namespace std;
void printUnion(int *arr1, int n, int *arr2, int m) {
	set<int> output;

	for (int i = 0; i < n; ++i)
	{
		output.insert(arr1[i]);
	}

	for (int i = 0; i < m; ++i)
	{
		output.insert(arr2[i]);
	}

	for (auto i = output.begin(); i != output.end(); i++) {
		cout << *i << endl;
	}
}
int main() {

	int n;
	cin >> n;

	int *arr1 = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}

	int m;
	cin >> m;

	int *arr2 = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> arr2[i];
	}

	printUnion(arr1, n, arr2, m);

	delete [] arr1;
	delete [] arr2;

	return 0;
}