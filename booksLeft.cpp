#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    long n, k;
    cin >> n >> k;
    long A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    int p1 = 0, p2 = n - 1, ans = n;

    while (p1 <= p2 && (A[p1] <= k || A[p2] <= k))
    {
        if (A[p1] <= k)
        {
            ans--;
            p1++;
        }
        if (A[p2] <= k && ans > 0)
        {
            ans--;
            p2--;
        }
    }
    cout << ans << endl;
    return 0;
}