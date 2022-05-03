#include <bits/stdc++.h>
using namespace std;

void beautifulBrackets()
{
    int j = 1;
    while (true)
    {
        string s;
        cin >> s;
        if (s.find('-') != -1)
            return;
        stack<char> brackets;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '{')
                brackets.push(s[i]);
            else if (brackets.size() > 0 && brackets.top() == '{')
                brackets.pop();
            else
                brackets.push(s[i]);
        }

        s = "";
        while (brackets.size() > 0)
        {
            s += brackets.top();
            brackets.pop();
        }

        reverse(s.begin(), s.end());

        int ans = 0, low = 0, high = s.length() - 1;

        for (int i = 0; i < s.length() - 1; i += 2)
        {
            if (s[i] != s[i + 1])
                ans += 2;
            else
                ans += 1;
        }

        cout << j++ << ". " << ans << endl;
    }
}

int main()
{
    // write your code here
    beautifulBrackets();
    return 0;
}