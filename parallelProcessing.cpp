#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull max(ull x, ull y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ull A[n];

        for (int i = 0; i < n; ++i)
        {
            ull x;
            cin >> x;
            if (i == 0)
                A[i] = x;
            else
                A[i] = x + A[i - 1];
        }

        if (n == 1)
            cout << A[0] << endl;
        else
        {
            ull ans = UINT64_MAX;
            ull minElement;
            ull maxElement = A[n - 1] - A[n - 2];
            for (int i = n - 2; i >= 0; --i)
            {
                minElement = max(A[i], maxElement);
                if (minElement >= ans)
                    break;
                else
                {
                    ans = minElement;
                    if (i > 0)
                        maxElement += A[i] - A[i - 1];
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}