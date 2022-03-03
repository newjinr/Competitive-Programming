#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
            cout << -1;
        else if (n % 2 == 1)
            for (int i = 1; i <= n; ++i)
                cout << i << " ";
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " " << 4 << " ";
            for (int i = 5; i <= n; ++i)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
