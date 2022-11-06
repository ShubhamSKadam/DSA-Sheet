#include<bits/stdc++.h>
using namespace std;
void findIntersection(int *arr1, int n, int *arr2, int m) {

	for (int i = 0; i < n; i++) {

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

	findIntersection(arr1, n, arr2, m);

	delete [] arr1;
	delete [] arr2;

	return 0;
}