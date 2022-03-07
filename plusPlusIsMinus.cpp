#include <bits/stdc++.h>
using namespace std;

bool isPossibleToMakeBothStringsEqual(string s, string t)
{
    if (s.length() < t.length())
        return false;

    if (s.length() == t.length() && s != t)
        return false;

    int s1 = 0, t1 = 0;

    while ((s1 < s.length()) && (t1 < t.length()))
    {
        if (t[t1] == '-' && s[s1] == '+')
            return false;
        if (t[t1] == '+' && s[s1] == '-' && s[s1 + 1] == '-')
            s1++;
        else if (t[t1] == '+' && s[s1] == '-' && s[s1 + 1] != '-')
            return false;
        s1++;
        t1++;
    }

    if (s1 != s.length() || t1 != s.length())
        return false;
    return true;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        (isPossibleToMakeBothStringsEqual(s, t)) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}