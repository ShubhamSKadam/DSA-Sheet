#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> arr, int n) {

	unordered_map<int, bool> present;
	for (int i = 0; i < n; i++) {
		present[arr[i]] = true;
	}

	int maxConsec = 0;
	unordered_map<int, bool> checked;
	for (int i = 0; i < n; ++i)
	{
		if (checked.find(arr[i]) != checked.end()) {
			continue;
		}
		else {
			if (present.find(arr[i] - 1) != present.end()) {
				continue;
			}
			else {
				int max = 0;
				int j = arr[i];
				while (present.find(j) != present.end()) {
					checked[j] = true;
					max++;
					j++;
				}
				if (max > maxConsec)
					maxConsec = max;
			}
		}
	}
	return maxConsec;

}
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

	cout << longestConsecutive(arr, n) << endl;

	return 0;
}