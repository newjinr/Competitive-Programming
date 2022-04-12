#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull findAns(ull *X, ull *Y, ull n)
{
    ull ans = (n * (n + 1)) / 2;

    for (int i = 0; i < n; ++i)
        if (X[i] == 1)
            ans -= Y[i];
    return ans;
}

int main()
{
    // write your code here
    ull n;
    string s;
    char x, y;
    cin >> n >> s >> x >> y;
    n = s.length();
    ull X[n]{0}, Y[n]{0};

    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == x)
            X[i] = 1;
        if (s[i] == y)
        {
            if (i == n - 1)
                Y[i]++;
            else
                Y[i] = Y[i + 1] + 1;
        }
        else if (i != n - 1)
            Y[i] = Y[i + 1];
    }

    cout << findAns(X, Y, n) << endl;

    return 0;
}