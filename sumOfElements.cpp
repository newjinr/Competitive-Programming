#include <bits/stdc++.h>
using namespace std;

string addTwoStrings(string num1, string num2)
{
    reverse(num2.begin(), num2.end());
    int p1 = 0;
    int p2 = 0;
    string str = "";
    int carry = 0;

    while (p1 < num1.length() || p2 < num2.length())
    {
        int added;
        if (p1 < num1.length() && p2 < num2.length())
            added = (num1[p1] - 48) + (num2[p2] - 48) + carry;
        else if (p1 < num1.length())
            added = (num1[p1] - 48) + carry;
        else
            added = (num2[p2] - 48) + carry;
        carry = 0;

        if (added >= 10)
        {
            str += (added % 10) + 48;
            carry = added / 10;
        }
        else
            str += added + 48;
        p1++;
        p2++;
    }
    if (carry > 0)
        str += carry + 48;

    return str;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans;
        cin >> ans;
        reverse(ans.begin(), ans.end());
        for (int i = 1; i < n; ++i)
        {
            string x;
            cin >> x;
            ans = addTwoStrings(ans, x);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}