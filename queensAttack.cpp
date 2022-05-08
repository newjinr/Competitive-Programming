#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0;

        ans = (y - 1) + (x - 1) + (n - x) + (n - y);
        ans += min(n - x, y - 1) + min(n - x, n - y) + min(x - 1, y - 1) + min(x - 1, n - y);

        cout << ans << endl;
    }

    return 0;
}
