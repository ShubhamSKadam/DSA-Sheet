#include<bits/stdc++.h>
using namespace std;
void sortAllZeroes(int *arr, int n) {

	int i = 0, j = 0;
	while (j < n) {

		if (arr[j] == 0) {
			j++;
		}
		else {
			swap(arr[i], arr[j]);
			i++;
			j++;
		}
	}
}
int main() {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	sortAllZeroes(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete [] arr;
	return 0;

}