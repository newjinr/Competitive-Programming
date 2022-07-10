
// Alice, Bob and Charlie are bidding for an artifact at an auction.
// Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A, B, and C are distinct).

// According to the rules of the auction, the person who bids the highest amount will win the auction.
// Determine who will win the auction.

// Input Format
// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three integers A, B, and C, — the amount bid by Alice, Bob, and Charlie respectively.

// Output Format
// For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.

// You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example, ALICE, aliCe, aLIcE will be considered identical).

// Constraints
// 1≤T≤1000
// 1≤A,B,C≤1000
// A, B, and C are distinct.

// Sample Input 1 
// 4
// 200 100 400
// 155 1000 566
// 736 234 470
// 124 67 2

// Sample Output 1 
// Charlie
// Bob
// Alice
// Alice

// Explanation
// Test Case 1: Charlie wins the auction since he bid the highest amount.

// Test Case 2: Bob wins the auction since he bid the highest amount.

// Test Case 3: Alice wins the auction since she bid the highest amount.

// Test Case 4: Alice wins the auction since she bid the highest amount.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int A, B, C;
        cin >> A >> B >> C;
        if(A > B && A > C)
            cout << "Alice" << endl;
        else if(B>A && B>C)
            cout << "Bob" << endl;
        else
            cout << "Charlie" << endl;
    }

    return 0;
}