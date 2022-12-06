#include <bits/stdc++.h>
using namespace std;
void rotateRight(int *arr, int n, int k)
{
      vector<int> temp(n);

      for (int i = 0; i < n; i++)
      {
            temp[(i + k) % n] = arr[i];
      }

      for (int i = 0; i < n; i++)
      {
            arr[i] = temp[i];
      }
}
int main()
{
      int n;
      cin >> n;

      int *arr = new int[n];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int k;
      cin >> k;

      rotateRight(arr, n, k);
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
      delete[] arr;
}
