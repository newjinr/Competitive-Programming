// Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks.

// Chef scored A marks in Section 1, B marks in section 2, and C marks in section 3.

// Chef passes the exam if both of the following conditions satisfy:

// Total score of Chef is ≥100;
// Score of each section ≥10.
// Determine whether Chef passes the exam or not.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of a single line containing 3 space-separated numbers A,B,C - Chef's score in each of the sections.
// Output Format
// For each test case, output PASS if Chef passes the exam, FAIL otherwise.

// Note that the output is case-insensitive i.e. PASS, Pass, pAsS, and pass are all considered same.

// Constraints
// 1≤T≤1000
// 0≤A,B,C≤100

// Sample Input 1 
// 5
// 9 100 100
// 30 40 50
// 30 20 40
// 0 98 8
// 90 80 80

// Sample Output 1 
// FAIL
// PASS
// FAIL
// FAIL
// PASS

// Explanation
// Test Case 1: Although Chef's total score is 209≥100, still Chef fails the exam since his score in section 1 is <10.

// Test Case 2: Chef cleared each section's cutoff as well his total score =120≥100.

// Test Case 3: Although Chef cleared each section's cutoff but his total score is 90<100. So he fails the exam.

// Test Case 4: Although Chef's total score is 106≥100, still Chef fails the exam since his score in section 1 is <10.

// Test Case 5: Chef cleared each section's cutoff as well his total score =250≥100.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--){
        int A, B, C;
        cin >> A >> B >> C;

        if(A >= 10 && B >= 10 && C >= 10 && (A+B+C) >= 100)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
    return 0;
}
