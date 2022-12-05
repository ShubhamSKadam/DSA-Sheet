// The time complexity of this code is O(2N)
// The space complexity of this code is O(N)
#include<bits/stdc++.h>
using namespace std;
void findDuplicate(vector<int>& nums) {
	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] >= 2) {
			cout << "Duplicate: " << i << endl;
			return;
		}
	}
}
void findMissing(vector<int>& nums) {

	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] == 0) {
			cout << "Missing: " << i << endl;
			return;
		}
	}
}
int main() {

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	vector<int> temp(n + 1, 0);

	for (int i = 0; i < n; i++) {
		temp[v[i]]++;
	}

	findMissing(temp);
	findDuplicate(temp);
	return 0;
}