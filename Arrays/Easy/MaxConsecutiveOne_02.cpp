#include<bits/stdc++.h>
using namespace std;
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

	int count = 0;
	int index = 0;
	int max = 0;
	while (index < n) {
		if (v[index] == 1) {
			count++;
			if (count > max)
				max = count;
		}
		else
			count = 0;
		index++;
	}

	cout << max << endl;
	return 0;
}