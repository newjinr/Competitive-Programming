#include <bits/stdc++.h>
using namespace std;

string addTwoStrings(string num1, string num2)
{
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

string productOfTwoStrings(string x, char y, int count)
{
    string str = "";
    int carry = 0;

    for (int i = 0; i < count; ++i)
        str += '0';

    for (int i = 0; i < x.length(); ++i)
    {
        int product = ((x[i] - 48) * (y - 48)) + carry;
        if (product >= 10)
        {
            str += (product % 10) + 48;
            carry = product / 10;
        }
        else
        {
            str += (product + 48);
            carry = 0;
        }
    }

    if (carry > 0)
        str += (carry + 48);
    return str;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        vector<string> arr;
        reverse(x.begin(), x.end());
        for (int i = 0; i < y.length(); ++i)
            if (y[i] != '0')
                arr.push_back(productOfTwoStrings(x, y[i], (y.length() - 1) - i));

        string ans = arr[0];
        for (int i = 1; i < arr.size(); ++i)
            ans = addTwoStrings(ans, arr[i]);

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}