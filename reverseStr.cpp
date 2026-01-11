#include <iostream>
using namespace std;


// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]





#include <bits/stdc++.h>
using namespace std;

void reverseStr(vector<char>& s, int i) {
    int n = s.size();

    // base case
    if (i >= n / 2) return;

    // swap ith element with its mirror
    swap(s[i], s[n - i - 1]);

    // recursive call
    reverseStr(s, i + 1);
}

int main() {
    vector<char> s(4);

    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    reverseStr(s, 0);

    for (char c : s) cout << c << " ";
}
