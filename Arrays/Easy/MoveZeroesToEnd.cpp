// TC : O(n);
// SC : O(1);
#include <bits/stdc++.h>
using namespace std;
void moveZeroesToEnd(int *arr, int n)
{
      int counter = 0;
      int i = 0;
      while (i < n)
      {
            if (arr[i] != 0)
            {
                  swap(arr[i], arr[counter]);
                  i++;
                  counter++;
            }
            else if (arr[i] == 0)
                  i++;
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

      moveZeroesToEnd(arr, n);
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      delete[] arr;
      return 0;
}