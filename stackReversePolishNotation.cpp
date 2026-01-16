#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution
{
private:
    int evaluate(int a, int b, string op)
    {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        return a / b;  // division truncates toward zero
    }

public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stk;

        for (auto token : tokens)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                int b = stk.top(); stk.pop();
                int a = stk.top(); stk.pop();

                stk.push(evaluate(a, b, token));
            }
            else
            {
                stk.push(stoi(token));
            }
        }

        return stk.top();
    }
};

int main()
{
    Solution sol;

    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << sol.evalRPN(tokens);

    return 0;
}
