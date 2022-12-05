// The Time Complexity of this code is O(N)
// The Space Complexity of this code is O(N) as we are using an additional tempLeft and tempRight vector
#include<bits/stdc++.h>
using namespace std;
void rotateLeft(vector<int>& arr, int n, int p) {

    vector<int> tempLeft;
    for (int i = p; i < p + n; i++) {
        tempLeft.push_back(arr[i % n]);
    }

    arr = tempLeft;
}
void rotateRight(vector<int>& arr, int n, int p) {

    vector<int> tempRight(n);
    for (int i = 0; i < n; i++) {
        tempRight[(i + p) % n] = arr[i];
    }
    arr = tempRight;
}
int main() {

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    vector<int> arr;
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int p;
    cout << "Enter the number of positions you want to shift" << endl;
    cin >> p;

    int d;
    cout << "Enter the direction at which you want to rotate 0-for left 1-for right" << endl;
    cin >> d;

    if (d)
        rotateRight(arr, n, p);
    else
        rotateLeft(arr, n, p);

    cout << "Rotated Array is as follows: " << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}