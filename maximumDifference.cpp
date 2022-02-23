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
        int min1 = INT_MAX;
        int max1 = INT_MIN;
        int min2 = INT_MAX;
        int max2 = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            min1 = min(x + i, min1);
            min2 = min(x - i, min2);
            max1 = max(x + i, max1);
            max2 = max(x - i, max2);
        }

        cout << max(max1 - min1, max2 - min2) << endl;
    }
    return 0;
}