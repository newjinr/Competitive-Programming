#include <bits/stdc++.h>
using namespace std;

int fibonnaci(int n)
{
    if (n <= 1)
        return n;
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibonnaci(n);
        cout << endl;
    }
    return 0;
}