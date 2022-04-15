#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll N, X, K;
    cin >> N >> X >> K;
    ll height[N], rate[N];

    // input heights of ropes
    for (ll i = 0; i < N; i++)
        cin >> height[i];

    // input rate of growth of ropes
    for (ll i = 0; i < N; i++)
        cin >> rate[i];

    // initialize minimum and maximum days that can be possible as low and high
    ll low = 0;
    ll high = 1000000000000000000;
    ll min_days = 0;

    // Check for a mid value if it is satisfying the conditions
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll sum = 0, flag = 0;
        cout << "mid: " << mid << endl;
        for (ll i = 0; i < N; i++)
        {
            if (K <= (mid * rate[i] + height[i]))
            {
                sum += (mid * rate[i] + height[i]);
                if (sum >= X)
                {
                    cout << "i: " << i << " sum: " << sum << endl;
                    flag = 1;
                    break;
                }
            }
        }

        /* if mid is one of the possible day, save it and
        keep on checking for more lower values in the left half */
        if (flag == 1)
        {
            min_days = mid;
            high = mid - 1;
        }
        /* if mid is not a possible day skip it and
          go on searching in the right half */
        else
            low = mid + 1;
    }
    cout << min_days;

    return 0;
}