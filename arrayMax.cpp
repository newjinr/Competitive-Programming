#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int maximum = 0;
        int A[n];
        ull *ans = new ull[k]{0};
        ll values[k]{0};
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            if (maximum < A[i])
                maximum = A[i];
            if (i < k)
                values[i] = A[i];
        }

        for (int i = k; i < n; i++)
        {
            if (values[i % k] < 0)
                values[i % k] = A[i];
            else
            {
                values[i % k] += A[i];
                if (values[i % k] > 0 && ans[i % k] < values[i % k])
                    ans[i % k] = values[i % k];
            }
        }

        sort(ans, ans + k);

        if (ans[k - 1] > maximum)
            cout << ans[k - 1] << endl;
        else
            cout << maximum << endl;
    }
    return 0;
}
