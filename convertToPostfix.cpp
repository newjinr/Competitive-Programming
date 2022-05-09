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

        stack<char> c;
        string ans = "";
        map<char, int> m;
        m.insert({'^', 6});
        m.insert({'/', 5});
        m.insert({'*', 4});
        m.insert({'%', 3});
        m.insert({'-', 2});
        m.insert({'+', 1});

        for (int i = 0; i < s.length(); ++i)
        {
            if (m.count(s[i]) > 0)
            {
                while (c.size() > 0 && m.count(c.top()) > 0 && m[s[i]] <= m[c.top()])
                {
                    ans += c.top();
                    c.pop();
                }
                c.push(s[i]);
            }
            else if (s[i] == '(')
                c.push(s[i]);
            else if (s[i] == ')')
            {
                while (true)
                {
                    if (c.top() == '(')
                    {
                        c.pop();
                        break;
                    }
                    ans += c.top();
                    c.pop();
                }
            }
            else
                ans += s[i];
        }
        while (c.size() > 0)
        {
            ans += c.top();
            c.pop();
        }
        cout << ans << endl;
    }

    return 0;
}