#include<bits/stdc++.h>
using namespace std;
vector<string> commonChars(vector<string>& words) {

	unordered_map<char, int> minimumFrequencyOverall;

	for (char ch = 'a'; ch <= 'z'; ch++) {
		minimumFrequencyOverall[ch] = 1000;
	}

	for (auto word : words) {
		unordered_map<char, int> frequency;

		for (auto ch : word) {
			frequency[ch]++;
		}

		for (char ch = 'a'; ch <= 'z'; ch++) {
			minimumFrequencyOverall[ch] = min(minimumFrequencyOverall[ch], frequency[ch]);
		}
	}

	vector<string> ans;
	for (char ch = 'a'; ch <= 'z'; ch++) {
		while (minimumFrequencyOverall[ch] > 0) {
			ans.push_back(string(1, ch));
			minimumFrequencyOverall[ch]--;
		}
	}
	return ans;
}
int main() {

	int n;
	cin >> n;

	vector<string> words;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		words.push_back(s);
	}

	vector<string> ans = commonChars(words);

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}