// The Time complexity of the solution is O(n^2);
#include<bits/stdc++.h>
using namespace std;
void priceBruteforce(int budget, int k, int u, int *keyboards, int *usb) {

	sort(keyboards, keyboards + k);
	sort(usb, usb + u);

	int max = -1;
	for (int i = k - 1; i >= 0; i--) {
		for (int j = u - 1; j >= 0; j--) {
			int ans = keyboards[i] + usb[j];
			if ( ans <= budget) {
				if (ans > max) {
					max = ans;
				}
			}
		}
	}
	cout << max << endl;
}
int main() {

	int budget;
	cin >> budget;

	int k, u;
	cin >> k >> u;

	int *keyboards = new int[k];
	for (int i = 0; i < k; ++i)
	{
		cin >> keyboards[i];
	}

	int *usb = new int[u];
	for (int i = 0; i < u; ++i)
	{
		cin >> usb[i];
	}

	priceBruteforce(budget, k, u, keyboards, usb);

	delete [] keyboards;
	delete [] usb;
	return 0;
}