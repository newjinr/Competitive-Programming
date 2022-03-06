#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int p1 = 0;
        int p2 = s.length() - 1;
        int ans = 0;

        while (p1 < p2)
        {
            if (s[p1] != s[p2])
            {
                if (s[p1] > s[p2])
                    ans += s[p1] - s[p2];
                else
                    ans += s[p2] - s[p1];
            }

            p1++;
            p2--;
        }

        cout << ans << endl;
    }
    return 0;
}