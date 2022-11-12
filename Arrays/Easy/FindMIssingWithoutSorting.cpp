#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n - 1; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	vector<int> temp(n, 0);
	for (int i = 0; i < n - 1 ; i++) {
		temp[v[i] - 1] = 1;
	}

	for (int i = 0; i < temp.size(); ++i)
	{
		if (temp[i] == 0)
			cout << i + 1 << endl;

	}

	return 0;
}