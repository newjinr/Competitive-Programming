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
        int count = 0;
        int skip = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                count++;
            else if (count == 0 && skip == 0)
                skip++;
            else if (count == 0 && skip > 0)
            {
                count = -1;
                break;
            }
            else
                count--;
        }

        if (s.length() % 2 == 0 && ((skip > 0 && count - 1 == 0) || count == 0))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}