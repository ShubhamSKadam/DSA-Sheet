#include<bits/stdc++.h>
using namespace std;
void findIntersection(int *arr1, int n, int *arr2, int m) {

	vector<int> ans;
	vector<int> visited(m, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (arr1[i] == arr2[j] && visited[j] == 0) {
				ans.push_back(arr2[j]);
				visited[j] = 1;
				break;
			}
			else if (arr2[j] > arr1[i])
				break;
		}
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
}
int main() {

	int n;
	cin >> n;

	int *arr1 = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}

	int m;
	cin >> m;

	int *arr2 = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> arr2[i];
	}

	findIntersection(arr1, n, arr2, m);

	delete [] arr1;
	delete [] arr2;

	return 0;
}