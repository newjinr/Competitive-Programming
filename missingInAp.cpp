#include <bits/stdc++.h>
using namespace std;

int findMissingAp(int *A, int n)
{
    int x = 0, y = 0, diff = 0;
    x = A[1] - A[0];
    if (n == 3)
        return A[1] + x;

    (x != A[2] - A[1]) ? y = A[2] - A[1] : diff = x;
    (y == A[3] - A[2] && diff == 0) ? diff = y : diff = x;

    for (int i = 0; i < n; ++i)
        if (A[i] + diff != A[i + 1])
            return A[i] + diff;
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
        cout << findMissingAp(A, n) << endl;
    }
    return 0;
}