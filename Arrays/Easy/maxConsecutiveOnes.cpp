#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	int max = 0;
	int index = 0;
	while (index < n) {

		if (arr[index] == 1) {
			int sum = 0;

			while (arr[index] != 0) {
				sum += 1;
				index++;
			}
			if (sum > max) {
				max = sum;
			}
		}
		index++;
	}
	cout << max << endl;

	return 0;
}