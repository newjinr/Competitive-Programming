// Chef is trying to solve a problem having T test cases, where, for each test case he is given a single integer N.

// Chef has an algorithm which takes exactly N2 iterations for a test case with value N.

// The constraints of the problem are as follows:

// 1≤T≤maxT
// 1≤N≤maxN

// Sum of N over all test cases does not exceed sumN.
// Given the values maxT,maxN, and sumN, determine the maximum number of iterations Chef's algorithm can take for any valid input file satisfying all the constraints.

// Formally speaking, find the maximum value of N21+N22+⋯+N2T for:

// 1≤T≤maxT
// 1≤Ni≤maxN
// N1+N2+N3+⋯+NT≤sumN

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of single line consisting of three integers maxT,maxN, and sumN.

// Output Format
// For each test case, output the the maximum number of iterations Chef's algorithm can take in any valid test file.

// Constraints
// 1≤T≤1000
// 1≤maxT≤maxN≤sumN≤104

// Sample Input 1 
// 4
// 10 100 200
// 3 10 100
// 1000 1000 2200
// 100 100 100

// Sample Output 1 
// 20000
// 300
// 2040000
// 10000

// Explanation
// Test Case 1: Worst case for Chef's algorithm would be where T=2 and N=100 for both the test cases. In this case, Chef's algorithm will take 1002+1002=20000 iterations.

// Test Case 2: Worst case for Chef's algorithm would be where T=3 and N=10 for all the 3 test cases. In this case, Chef's algorithm will take 102+102+102=300 iterations.

// Test Case 3: Worst case for Chef's algorithm would be where T=3 and N=1000,1000, and 200 for the three test cases respectively. In this case, Chef's algorithm will take 10002+10002+2002=2040000 iterations.

// Test Case 4: Worst case for Chef's algorithm would be where T=1 and N=100. In this case Chef's algorithm will take 1002=10000 iterations.

#include <iostream>
using namespace std;

long long findSlowSolution(int maxT, int maxN, int sumN){
    long long ans = 0;
    int max = 0;

    while(max+maxN <= sumN && maxT > 0){
        ans += maxN * maxN;
        max += maxN;
        maxT--;
    }

    if(maxT>0 && sumN > max)
        ans += (sumN - max) * (sumN - max);

    return ans;
}

int main() {
	// your code goes here

    int t;
    cin >> t;

    while(t--){
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        cout << findSlowSolution(maxT, maxN, sumN) << endl;
    }

    return 0;
}
