#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

bool findMatch(unordered_multiset<int> values, int i, int j){
    unordered_multiset<int> temp = values;
    if(temp.count(i+j) !=0 ){
        temp.erase(i + j);
        if(temp.count(i-j) != 0){
            temp.erase(i - j);
            if(temp.count(i*j) != 0){
                temp.erase(i * j);
                if(temp.count(i/j) != 0){
                    temp.erase(i / j);
                    return true;
                }
            }
        }
    }
    return false;
}

vector<int> findMax(unordered_multiset<int> values, int start, int end){
    vector<int> ans = {-1, -1};
    unordered_set<int> index;
    if(end > 20000)
        return ans;

    for (int i = start; i <= 10000; ++i){
        if(index.count(end - i) != 0){
            if(findMatch(values, i, end-i)){
                ans[0] = i;
                ans[1] = end-i;
                return ans;
            }
            else if(findMatch(values, end-i, i)){
                ans[0] = end-i;
                ans[1] = i;
                return ans;
            }
            
        }
        else
            index.insert(i);
        if (findMatch(values, i, i)){
                ans[0] = i;
                ans[1] = i;
                return ans;
        }
    }
    return ans;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        unordered_multiset<int> values;
        int A[4], negative = 0;
        for (int i = 0; i < 4; ++i){
            cin >> A[i];
            values.insert(A[i]);
            if(A[i] < 0)
                negative++;
        }
        sort(A, A + 4);
        if(negative != 1)
            cout << -1 << " " << -1 << endl;
        else{
            int start = 1;
            if(A[0] > 0)
                start = A[0];
            vector<int> ans = findMax(values, start, A[2]);
            cout << ans[0] << " " << ans[1] << endl;
        }
    }
    return 0;
}
