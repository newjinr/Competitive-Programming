#include <bits/stdc++.h>
using namespace std;

void findBinaryString(char *b, int n, int i)
{
    if (i == n)
    {
        b[n] = NULL;
        cout << b << endl;
        return;
    }

    if (b[i - 1] == '1')
    {
        b[i] = '0';
        findBinaryString(b, n, i + 1);
        b[i] = '1';
        findBinaryString(b, n, i + 1);
    }
    if (b[i - 1] == '0')
    {
        b[i] = '0';
        findBinaryString(b, n, i + 1);
        b[i] = '1';
        findBinaryString(b, n, i + 1);
    }
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
        char binary[n];
        binary[0] = '0';
        findBinaryString(binary, n, 1);
        binary[0] = '1';
        findBinaryString(binary, n, 1);
    }
    return 0;
}