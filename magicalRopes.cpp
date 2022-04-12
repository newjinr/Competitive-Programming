#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // write your code here
    ll n;
    ll x, k;
    cin >> n >> x >> k;

    ll height[n], growth[n];
    for (ll i = 0; i < n; ++i)
        cin >> height[i];

    for (ll i = 0; i < n; ++i)
        cin >> growth[i];

    ll low = 0, high = 1000000000000000000;
    ll ans = 0;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll sum = 0, flag = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (k <= mid * growth[i] + height[i])
            {
                sum += mid * growth[i] + height[i];
                if (sum >= x)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout << ans << endl;

    return 0;
}