#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<pair<char, int>> c;

    for (int i = 0; i < s.length(); ++i)
    {
        if (c.size() > 0 && s[i] == ')' && c.top().first == '(')
            c.pop();
        else if (s[i] == ')' || s[i] == '(')
            c.push({s[i], i});
    }

    while (c.size() != 0)
    {
        s.erase(c.top().second, 1);
        c.pop();
    }
    cout << s << endl;

    return 0;
}