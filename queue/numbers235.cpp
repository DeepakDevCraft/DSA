#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(5);

    for (int i = 1; i < n; i++)
    {

        int x = q.front();
        q.pop();
        q.push(x * 10 + 2);
        q.push(x * 10 + 3);
        q.push(x * 10 + 5);
    }

    for (int i = 0; i < q.size(); i++)
    {

        cout << q.front() << endl;
        q.pop();
    }
}