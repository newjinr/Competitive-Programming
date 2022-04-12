#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull min(ull x, ull y)
{
    if (x < y)
        return x;
    return y;
}

int main()
{
    int t;
    cin >> t;
    for (int c = 0; c < t; ++c)
    {
        int n, p;
        cin >> n >> p;
        ull *A = new ull[n], ans = ULONG_LONG_MAX;

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        sort(A, A + n);

        for (int i = 1; i < n; ++i)
            A[i] += A[i - 1];

        ull maxSkill;
        for (int i = p - 1; i < n; ++i)
        {
            maxSkill = A[i] - A[i - 1];
            if (i - p < 0)
                ans = min(ans, ((maxSkill * p) - A[i]));
            else
                ans = min(ans, ((maxSkill * p) - A[i - p]));
        }
        cout << "Case #" << c + 1 << ": " << ans << endl;
    }

    return 0;
}