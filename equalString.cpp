#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[n];
        int ans = INT_MAX;
        bool flag = false;

        for (int i = 0; i < n; ++i)
            cin >> s[i];

        for (int i = 0; i < n; ++i)
        {
            int count = 0;
            string temp = "";
            for (int j = 0; j < n; ++j)
            {
                temp = s[j] + s[j];
                int index = temp.find(s[i]);
                if (index == -1)
                {
                    ans = -1;
                    flag = true;
                    break;
                }
                count += index;
            }
            if (flag)
                break;
            ans = min(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}
