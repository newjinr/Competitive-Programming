// There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available.

// Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// The first and only line of each test case contains two integers N and X — the number of children and the number of candies Chef already has.

// Output Format
// For each test case, output the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.

// Constraints
// 1≤T≤1000
// 1≤N,X≤100

// Sample Input 1 
// 4
// 20 12
// 10 100
// 10 9
// 20 9

// Sample Output 1 
// 2
// 0
// 1
// 3

// Explanation
// Test Case 1: Chef must buy 2 more packets after which he will have 20 candies which will be enough to distribute 1 candy to each of the 20 children.

// Test Case 2: Chef does not need to buy more packets since he already has 100 candies which are enough to distribute 1 candy to each of the 10 children.

// Test Case 3: Chef must buy 1 more packet after which he will have 13 candies which will be enough to distribute 1 candy to each of the 10 children.

// Test Case 4: Chef must buy 3 more packets after which he will have 21 candies which will be enough to distribute 1 candy to each of the 20 children.

#include <iostream>
using namespace std;

int minimumCandyPackets(int n, int x){
    if(x >= n)
        return 0;

    n -= x;
    int q = n / 4;
    if(n%4 > 0) q++;

    return q;
}

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--){
        int N, X;
        cin >> N >> X;

        cout << minimumCandyPackets(N, X) << endl;
    }
    return 0;
}
