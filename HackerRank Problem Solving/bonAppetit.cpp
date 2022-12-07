#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;

	if (n < 2)
		return 0;

	int k;
	cin >> k;

	int *bill = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> bill[i];
	}

	int b;
	cin >> b;

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i != k)
			sum += bill[i];
	}

	int ans = sum / 2;
	if (ans == b)
		cout << "Bon Appetit" << endl;
	else
		cout << b - ans << endl;

	delete [] bill;

	return 0;
}