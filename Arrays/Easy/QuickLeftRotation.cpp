#include <bits/stdc++.h>
using namespace std;
void leftRotate(int *arr, int n, int k)
{
      if (n <= 0)
            return;
      int *temp = new int[n];
      for (int i = 0; i < n; i++)
      {
            temp[i] = arr[(i + k) % n];
      }

      // copy the elements back to the original array
      for (int i = 0; i < n; i++)
      {
            arr[i] = temp[i];
      }

      delete[] temp;
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

      leftRotate(arr, n, k);
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      delete[] arr;
      return 0;
}