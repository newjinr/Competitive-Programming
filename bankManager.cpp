#include <bits/stdc++.h>
using namespace std;
#define ui unsigned int

ui findNum(ui n)
{
    ui x = 0;
    for (ui i = 2; n != 1; i++)
    {
        if (n % i == 0)
        {
            x += i;
            n /= i;
            i = 1;
        }
    }
    return x;
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        ui n;
        cin >> n;
        ui ans = findNum(n);
        cout << ans << endl;
    }

    return 0;
}