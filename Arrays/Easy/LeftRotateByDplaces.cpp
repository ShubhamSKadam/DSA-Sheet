#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& v, int d) {

	vector<int> temp;
	for (int i = d; i < d + v.size(); i++) {
		temp.push_back(v[i % v.size()]);
	}

	v = temp;
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

	int d;
	cin >> d;

	leftRotate(v, d);
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}