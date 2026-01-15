#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string buildString(string s)
    {

        stack<char> stk;
        string res = "";
        for (auto ele : s)
        {

            if (ele == '*')
            {

                if (!stk.empty())
                {

                    stk.pop();
                }
            }
            else
            {
                stk.push(ele);
            }
        }

        while (!stk.empty())
        {

            res += stk.top();
            stk.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
    string removeStars(string s)
    {

        return buildString(s);
    }
};

int main()
{

    Solution sol;
    string s;
    cin >> s;

    cout << sol.removeStars(s);
}