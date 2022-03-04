#include <bits/stdc++.h>
using namespace std;

bool checkIfVowel(char x)
{
    set<char> vowels{'a', 'e', 'i', 'o', 'u'};
    if (vowels.count(x) == 0)
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
        string s;
        cin >> s;
        int length = s.length();
        bool ans = false;
        if (length == 1 && (checkIfVowel(s[0]) || s[0] == 'n'))
            ans = true;
        else if (length > 1 && (checkIfVowel(s[length - 1]) || s[length - 1] == 'n'))
        {
            ans = true;
            for (int i = 0; i < length - 1; ++i)
                if (s[i] != 'n' && !checkIfVowel(s[i]) && !checkIfVowel(s[i + 1]))
                {
                    ans = false;
                    break;
                }
        }

        (ans) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}