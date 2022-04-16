#include <bits/stdc++.h>
using namespace std;

void powerSetOfString(string s, int n, char a, int i, string substr)
{
    if (i >= n)
        return;
    string ans = substr;
    ans += a;
    cout << ans << endl;
    powerSetOfString(s, n, s[i + 1], i + 1, ans);
    ans.pop_back();
    powerSetOfString(s, n, s[i + 1], i + 1, ans);
}

int main()
{
    // write your code here
    string s;
    cin >> s;

    int A[26]{0};

    for (int i = 0; i < s.length(); ++i)
        A[s[i] - 97]++;

    s = "";
    for (int i = 0; i < 26; ++i)
        while (A[i]-- > 0)
            s += (i + 97);

    powerSetOfString(s, s.length(), s[0], 0, "");

    return 0;
}