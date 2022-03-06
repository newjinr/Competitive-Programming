#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string original, fake;
        cin >> original >> fake;

        string temp = fake + fake;
        long long index = temp.find(original);
        if (index == 2 || index == fake.length() - 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}