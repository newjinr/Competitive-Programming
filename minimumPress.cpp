#include <bits/stdc++.h>
using namespace std;
#define ll long long

void upOrDown(ll *x, ll *y, ll i, ll n)
{
    if (i == n - 1)
    {
        x[i]++;
        y[i] = 0;
    }
    else
    {
        x[i] = x[i + 1] + 1;
        y[i] = y[i + 1];
    }
}

int main()
{
    // write your code here
    string s;
    cin >> s;
    s[0] = 'U';
    s[s.length() - 1] = 'D';
    ll ans = 0, n = s.length();
    ll *up = new ll[n], *down = new ll[n];

    for (ll i = n - 1; i >= 0; --i)
        if (s[i] == 'D')
            upOrDown(down, up, i, n);
        else
            upOrDown(up, down, i, n);

    for (ll i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == 'U')
            ans += (3 * up[i + 1]) + (2 * down[i + 1]);
        else
            ans += (4 * up[i + 1]) + (3 * down[i + 1]);
    }

    cout << ans << endl;

    return 0;
}