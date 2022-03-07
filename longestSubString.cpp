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
        map<char, int> a;

        int p1 = 0;
        int p2 = 0;
        int ans = 0;
        while (p2 < s.length())
        {
            if (a.count(s[p2]) != 0 && a[s[p2]] >= p1)
                p1 = s[p2] + 1;
            a[s[p2]] = p2;
            ans = max(ans, p2 - p1 + 1);
            p2++;
        }
        cout << ans << endl;
    }

    return 0;
}