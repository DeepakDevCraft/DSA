#include<bits/stdc++.h>
using namespace std;

class MyStack{
public:
    vector<int>arr;

    MyStack(){};

    void push(int val);

    int pop();
    void display();
};

void MyStack::push(int val){

    arr.push_back(val);
}

int MyStack::pop() {
    if (arr.empty()) return -1;

    int val = arr.back();  // get top element
    arr.pop_back();        // remove it
    return val;
}


void MyStack::display(){

    int top = arr.size()-1;

   while(top>0){

    cout<<arr[top]<<endl;
    top--;
   }
}

int main(){

    MyStack stk;

    stk.push(5);
    stk.push(51);
    stk.push(52);

    stk.display();
}