#include <bits/stdc++.h>
using namespace std;

string isSameString(string s, int i, int j)
{
    if (s[i] != s[j])
        return "No";
    if (j == 0)
        return "Yes";
    return isSameString(s, i + 1, j - 1);
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isSameString(s, 0, s.length() - 1) << endl;
    }
    return 0;
}