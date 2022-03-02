#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

ll abs(ll a, ll b)
{
    if (a > b)
        return a - b;
    return b - a;
}

int main()
{
    // write your code here
    int n;
    cin >> n;
    ull ans = 0;
    ll prevElement;

    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (i == 0)
            ans += abs(x, 0);
        else
            ans += abs(prevElement, x);
        prevElement = x;
    }

    cout << ans << endl;

    return 0;
}