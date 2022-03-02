#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        ull n, k, x;
        cin >> n >> k;
        ull *A = new ull[100000001]{0};
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            A[x]++;
        }
        ull ans = 0;
        ull steps = 0;
        bool flag = false;
        for (int i = 0; i <= x; ++i)
        {
            if (steps > 0 || flag)
            {
                steps++;
                flag = false;
            }
            if (A[i] > 0)
            {
                ans += steps;
                flag = true;
                steps = 0;
            }
            if (steps == k)
            {
                ans += steps;
                steps = 0;
            }
        }

        cout << ans + k << endl;
    }

    return 0;
}