#include<bits/stdc++.h>
using namespace std;
int main() {

	int q;
	cin >> q;

	while (q--) {

		int x, y, c;
		cin >> x >> y >> c;

		int distX = abs(x - c);
		int distY = abs(y - c);

		if (distY == distX)
			cout << "Mouse C" << endl;
		else if (distY < distX) {
			cout << "Cat B" << endl;
		}
		else {
			cout << "Cat A" << endl;
		}
	}
	return 0;
}