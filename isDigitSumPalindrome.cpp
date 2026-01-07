#include <bits/stdc++.h>
using namespace std;

// Function to compute sum of digits
int digitSum(int n) {
    if (n == 0) return 0;
    return (n % 10) + digitSum(n / 10);
}

// Recursive palindrome checker
bool isPalindromeHelper(string& s, int i) {
    int n = s.size();
    if (i >= n/2) return true;
    if (s[i] != s[n-i-1]) return false;
    return isPalindromeHelper(s, i+1);
}

int main() {
    int n;
    cin >> n;

    int c = n;

    int loop = 0;


    // while(c>0){

    //     loop+=c%10;
    //     c = c/10;
    //            }

    cout<<"my loop result"<<loop<<endl;

    // Step 1: find digit sum
    int sum = digitSum(n);

    // Step 2: check if digit sum is palindrome
    string s = to_string(sum);
    bool isp = isPalindromeHelper(s, 0);

    cout << "Digit sum = " << sum << endl;
    cout << "Is palindrome? " << (isp ? "Yes" : "No") << endl;

    return 0;
}
