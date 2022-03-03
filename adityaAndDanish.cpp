#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int aditya = 0, danish = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'D')
                danish++;
            else
                aditya++;
        }
        if (aditya == danish)
            cout << "AdiDan" << endl;
        else if (aditya > danish)
            cout << "Aditya" << endl;
        else
            cout << "Danish" << endl;
    }
    return 0;
}