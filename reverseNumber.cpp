#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = 2147483648;
    cin >> x;
    bool isNegative = false;

    if (x < 0)
    {
        x *= -1;
        isNegative = true;
    }

    long long ans = 0;

    while (x)
    {
        ans = (ans * 10) + (x % 10);
        x /= 10;
        if (ans > INT_MAX)
            cout << 0 << endl;
    }

    if (isNegative)
        cout << -1 * ans << endl;
    else
        cout << ans << endl;

    return 0;
}