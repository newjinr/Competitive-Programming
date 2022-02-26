#include <bits/stdc++.h>
using namespace std;

string reverse(string s, int i, int j)
{
    string temp = "";
    int count = 0;
    for (; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp += reverse(s, i + 1, i + 1);
            temp += s.substr(j, count);
            return temp + " ";
        }
        count++;
    }
    if (i > s.length())
        return temp;
}

int main()
{
    string s;
    getline(cin, s);
    s.insert(s.end(), ' ');

    cout << reverse(s, 0, 0);
    return 0;
}