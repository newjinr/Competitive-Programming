#include <bits/stdc++.h>
using namespace std;

int minDeletions(string s)
{
    int A[26] = {0};
    int count = 0;

    for (int i = 0; i < s.length(); ++i)
        A[s[i] - 97]++;

    sort(A, A + 26, greater<int>());

    for (int i = 0; i < 25; ++i)
    {
        if (A[i] == A[i + 1] && A[i] != 0)
        {
            count++;
            A[i + 1]--;
        }
        else if (A[i] < A[i + 1])
        {
            int diff = A[i + 1] - A[i];
            A[i + 1] -= diff;
            count += diff;
            if (A[i + 1] != 0)
                A[i + 1]--;
            if (A[i] != 0)
                count++;
        }
    }

    return count;
}

int main()
{
    string word;
    cin >> word;
    cout << minDeletions(word) << endl;
}