#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {

        queue<int> q;
        for (int s : students)
            q.push(s);

        int idx = 0;      // sandwich index
        int attempts = 0; // failed attempts
        int n = students.size();

        while (!q.empty() && attempts < q.size())
        {

            if (q.front() == sandwiches[idx])
            {
                q.pop();
                idx++;
                attempts = 0; // reset on success
            }
            else
            {
                int x = q.front();
                q.pop();
                q.push(x);
                attempts++;
            }
        }

        return q.size();
    }
};

int main()
{

    vector<int> students;
    vector<int> sandwiches;

    for (int i = 0; i < 6; i++)
    {
        int s, sw;
        cin >> s >> sw;

        students.push_back(s);
        sandwiches.push_back(sw);
    }

    Solution obj;
    cout << obj.countStudents(students, sandwiches);
}
