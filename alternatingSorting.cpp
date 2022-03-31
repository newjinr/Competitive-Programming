#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr, arr + N);

    int p1 = 0;
    int p2 = N - 1;
    vector<int> ans;
    bool flag = true;
    while (p1 < p2)
    {
        if (flag)
            ans.push_back(arr[p2--]);
        else
            ans.push_back(arr[p1++]);
        flag = !flag;
    }

    for (auto a : ans)
        cout << a << " ";

    return 0;
}