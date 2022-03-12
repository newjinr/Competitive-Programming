#include <bits/stdc++.h>
using namespace std;

string isEquivalentString(string str)
{
    if (str.length() & 0x01)
        return str;
    string x = isEquivalentString(str.substr(0, str.length() / 2));
    string y = isEquivalentString(str.substr(str.length() / 2));
    return min(x + y, y + x);
}

int main()
{
    // write your code here
    string a, b;
    cin >> a >> b;

    if (isEquivalentString(a) == isEquivalentString(b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}