// TC : O(n)
// SC : O(n)
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}

	int target;
	cin >> target;

	vector<int> result;
	unordered_map<int, int> indexElements;
	for (int i = 0; i < n; ++i)
	{
		int ans = target - nums[i];
		if (indexElements.count(ans) > 0) {
			result.push_back(indexElements[ans]);
			result.push_back(i);
			break;
		}
		else
			indexElements[nums[i]] = i;
	}

	for (int i = 0; i < 2; ++i)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}