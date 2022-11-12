#include<bits/stdc++.h>
using namespace std;
int FindMissing(vector<int>& v) {
	int count = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (count == v[i])
			count++;
	}
	return count;
}
int duplicate(vector<int>& v) {

	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] == v[i + 1])
			return v[i];
	}
	return -1;
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

	sort(v.begin(), v.end());

	cout << duplicate(v) << endl;

	cout << FindMissing(v) << endl;

	return 0;
}