#include <bits/stdc++.h>
using namespace std;

int findMaxNumberOfBoxes(int a, int b, int c)
{
    int ans = 0;
    if (c > 0 && c <= a && c <= b)
    {
        ans = c;
        a -= c;
        b -= c;
        c = 0;
    }
    else if (c > 0)
    {
        ans = min(a, b);
        a -= ans;
        b -= ans;
        c = 0;
    }
    while (a > 1 || b > 1)
    {
        if (a >= b && a > 1 && b > 0)
        {
            ans++;
            a -= 2;
            b--;
        }
        else if (b >= a && b > 1 && a > 0)
        {
            ans++;
            b -= 2;
            a--;
        }
    }
    return ans;
}

int main()
{
    // write your code here
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 || b == 0)
            cout << 0 << endl;
        else
            cout << findMaxNumberOfBoxes(a, b, c) << endl;
    }

    return 0;
}