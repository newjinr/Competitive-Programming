#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); ++i)
    {
        ans += s[i];
        cout << ans << endl;
    }
    ans = s[s.length() - 1];
    for (int i = s.length() - 1; i >= 0; --i)
    {
        cout << ans << endl;
        string temp = ans;
        ans = s[i] + temp;
    }

    return 0;
}