#include <bits/stdc++.h>
using namespace std;
int main()
{

      int n;
      cin >> n;

      int *arr = new int[n];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      // preprocessing the array
      vector<int> frequency(n + 1, 0);
      for (int i = 0; i < n; i++)
      {
            frequency[arr[i]]++;
      }

      int queries;
      cin >> queries;

      while (queries--)
      {

            int q;
            cin >> q;

            cout << frequency[q] << endl;
      }

      delete[] arr;
}