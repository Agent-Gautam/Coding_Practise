#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int item, int b, int e)
{
    int m = b + (e - b) / 2;
    if (e >= b)
    {
        if (item == arr[m])
        {
            return m;
        }
        if (item > arr[m])
        {
            return search(arr, item, m + 1, e);
        }
        return search(arr, item, b, m - 1);
    }
    return -1;
}

int main()
{
    int arr[] = {55, 56, 77, 90, 100};
    int n;
    cin >> n;
    cout << search(arr, n, 0, 4) << endl;
}