#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/backspace-string-compare/submissions/1884500309/

class Solution {
public:
    string buildString(string s) {
        stack<char> stk;

        for (char c : s) {
            if (c == '#') {
                if (!stk.empty())
                    stk.pop();
            } else {
                stk.push(c);
            }
        }

        string res = "";
        while (!stk.empty()) {
            res += stk.top();
            stk.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }

    bool backspaceCompare(string s, string t) {
        return buildString(s) == buildString(t);
    }
};

int main() {
    Solution sol;
    string s1, s2;

    cin >> s1 >> s2;
    cout << sol.backspaceCompare(s1, s2);

    return 0;
}
