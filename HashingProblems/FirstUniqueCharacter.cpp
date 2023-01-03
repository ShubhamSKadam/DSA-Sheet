#include<bits/stdc++.h>
using namespace std;
int main() {

	string input;
	cin >> input;

	unordered_map<char, int> frequency;
	for (int i = 0; i < input.size(); i++) {
		frequency[input[i]]++;
	}

	for (int i = 0; i < input.size(); ++i)
	{
		if (frequency[input[i]] == 1) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}