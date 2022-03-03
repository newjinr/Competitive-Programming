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
        int vowels = 0, consonants = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowels++;
            else
                consonants++;
        }
        cout << vowels << " " << consonants << endl;
    }
    return 0;
}