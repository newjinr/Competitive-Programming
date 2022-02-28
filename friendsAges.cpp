#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here

    int n;
    cin >> n;
    int ages[121]{0};
    int request = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ages[x]++;
    }

    for (int i = 14; i < 121; i++)
    {
        if (ages[i] > 0)
        {
            int case1 = (i / 2) + 7 + 1;
            int temp = case1;
            while (case1 < i)
            {
                if (ages[case1] > 0)
                    request += ages[case1] * ages[i];
                case1++;
            }
            if (temp <= i)
                request += ages[i] * (ages[i] - 1);
        }
    }

    cout << request << endl;

    return 0;
}