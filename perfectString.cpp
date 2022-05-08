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

        stack<char> perString;

        for (int i = 0; i < s.length(); ++i)
        {
            if (perString.size() > 0)
            {
                if (perString.top() - 97 == s[i] - 65 || perString.top() - 65 == s[i] - 97)
                    perString.pop();
                else
                    perString.push(s[i]);
            }
            else
                perString.push(s[i]);
        }
        s = "";

        while (perString.size() > 0)
        {
            s += perString.top();
            perString.pop();
        }

        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}