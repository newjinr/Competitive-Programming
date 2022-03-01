#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        (n % 2 == 0) ? cout << "Good" << endl : cout << "Not Good" << endl;
    }

    return 0;
}