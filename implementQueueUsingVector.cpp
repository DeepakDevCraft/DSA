#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
private:
    vector<int> stk;
    int front;

public:
    MyQueue() { front = 0; }

    void push(int x) { stk.push_back(x); }

    int pop() {

        int front_ele = stk[front++];
        return front_ele;
    }

    int peek() { return stk[front]; }

    bool empty() { return stk.size() == front; }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

 int main(){
MyQueue obj ;

     
 }