#include<bits/stdc++.h>
using namespace std;
int missingNumber(int A[], int N)
{
    // Your code goes here
    vector<int> temp(N + 1, 0);

    for (int i = 0; i < N - 1; i++) {
        temp[A[i]]++;
    }

    for (int i = 1; i <= temp.size(); i++) {
        if (temp[i] == 0)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> arr[i];
    }

    cout << missingNumber(arr, n) << endl;
    delete [] arr;
}