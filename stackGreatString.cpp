#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string buildString(string s)
    {

        stack<char> stk;

        for (auto ele : s)
        {

            if (!stk.empty() && (stk.top() - 32 == ele || stk.top() + 32 == ele))
            {

                stk.pop();
            }

            else
            {
                stk.push(ele);
            }
        }

        string res = "";

        while (!stk.empty())
        {
            res += stk.top();
            stk.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }

    string makeGood(string s)
    {

        return buildString(s);
    }
};
int main()
{

    Solution sol;
    string s;
    cin >> s;

    cout << sol.makeGood(s);
}