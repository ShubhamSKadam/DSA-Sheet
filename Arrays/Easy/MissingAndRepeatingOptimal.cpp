#include<bits/stdc++.h>
using namespace std;
int findXOR(vector<int>& nums, int n) {

	int xorOfNums = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		xorOfNums ^= nums[i];
	}

	int xorOfN = 1;
	for (int i = 2; i <= n; i++) {
		xorOfN ^= i;
	}

	return xorOfN ^ xorOfNums;
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

	int ansXOR = findXOR(v, n);
	cout << ansXOR << endl;

	return 0;
}