#include <bits/stdc++.h>
using namespace std;

int sortUniqueWay(int *a, int low, int high)
{
    int longestSortedArray = 0;
    int mid = (low + high) / 2;
    int flag = 0;
    for (int i = low; i < high; ++i)
    {
        if (a[i] <= a[i + 1])
            flag++;
        else
            break;
    }

    if (flag == high - low)
        return flag + 1;

    longestSortedArray = max(longestSortedArray, sortUniqueWay(a, low, mid));
    longestSortedArray = max(longestSortedArray, sortUniqueWay(a, mid + 1, high));

    return longestSortedArray;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        cout << sortUniqueWay(A, 0, n - 1) << endl;
    }

    return 0;
}