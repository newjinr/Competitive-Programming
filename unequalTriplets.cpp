#include <bits/stdc++.h>
using namespace std;

int unequalTriplets(vector<int> &nums)
{
    int tripletCount = 0;
    for (int i = 0; i <= nums.size() - 3; ++i)
    {
        int j = i + 1;
        int triplet = 1;

        while (j < nums.size())
        {
            if (nums[i] != nums[j])
            {
                triplet++;
                int k = j + 1;
                while (k < nums.size())
                {
                    if (nums[i] != nums[k] && nums[j] != nums[k])
                        tripletCount++;
                    k++;
                }
            }
            j++;
        }
    }
    return tripletCount;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << unequalTriplets(nums);
    return 0;
}