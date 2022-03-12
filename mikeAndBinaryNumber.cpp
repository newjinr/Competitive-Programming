#include <bits/stdc++.h>
using namespace std;

void findBinary(char *b, int n, int i, int ones, int zeros, int one, int zero)
{
    if (i == n)
    {
        b[n] = NULL;
        if (zero == zeros && ones == one)
            cout << b << " ";
        return;
    }

    if (b[i - 1] == '1')
    {
        zero++;
        b[i] = '0';
        findBinary(b, n, i + 1, ones, zeros, one, zero);
        zero--;
        one++;
        b[i] = '1';
        findBinary(b, n, i + 1, ones, zeros, one, zero);
    }
    if (b[i - 1] == '0')
    {
        zero++;
        b[i] = '0';
        findBinary(b, n, i + 1, ones, zeros, one, zero);
        zero--;
        one++;
        b[i] = '1';
        findBinary(b, n, i + 1, ones, zeros, one, zero);
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
        string binary = "";
        int ones = 0, zeros = 0;
        while (n > 0)
        {
            if (n % 2 == 0)
                zeros++;
            else
                ones++;
            binary += (n % 2) + 48;
            n /= 2;
        }
        int size = binary.size();
        char arr[size];
        arr[0] = '0';
        findBinary(arr, size, 1, ones, zeros, 0, 1);
        arr[0] = '1';
        findBinary(arr, size, 1, ones, zeros, 1, 0);
        cout << endl;
    }
    return 0;
}