#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    long long ans = 0;
    bool isNegative = false;
    bool foundPositive = false;

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '-')
            isNegative = true;
        else if (s[i] == '+')
            foundPositive = true;

        if (isNegative && foundPositive)
            return 0;

        if (s[i] >= 48 && s[i] <= 57)
            ans = (ans * 10) + (s[i] - 48);
        if (ans + 1 > INT_MAX || ans - 1 < INT_MIN || ((s[i] < 48 || s[i] > 57) && s[i] != ' ' && s[i] != '-' && s[i] != '+'))
            break;
    }

    if (isNegative && ans != 0)
        return ans * -1 < INT_MIN ? INT_MIN : ans * -1;

    if (ans + 1 > INT_MAX)
        return INT_MAX;

    return ans;
}