#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    cout << n << " ";
    if (n <= 0)
        return;
    printPattern(n - 5);
    cout << n << " ";
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
        printPattern(n);
        cout << endl;
    }
    return 0;
}