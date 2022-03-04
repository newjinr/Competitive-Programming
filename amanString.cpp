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
        int flag = 0;
        unsigned int ans = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s.substr(i, 4) == "aman")
            {
                ans += ((i + 1 - flag) * (s.length() - (i + 3)));
                flag = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}