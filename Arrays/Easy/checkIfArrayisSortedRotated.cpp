// Algorithm :
// 1. Traverse through the entire array and find the total pair of arr[i] > arr[i+1] and store it
// in a count variable.
// 2. After the traversal compare the last element and first element.
// 3. if the count value is 0 , it says that all elements in the array are equal and return true.
// 4. if the count value is 1 return true and if it is greater than 1, return false.

// Time Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {

	int n = nums.size();
	int count = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (nums[i] > nums[i + 1])
			count++;
	}
	if (nums[n - 1] > nums[0])
		count++;

	if (count == 1 || count == 0)
		return true;
	else
		return false;
}
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

	cout << check(nums) << endl;

	return 0;
}