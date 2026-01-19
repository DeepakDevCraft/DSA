#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int val);
    void display();
    int pop();
};

void Stack::push(int val)
{
    Node *t = new Node;

    if (t == NULL)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        t->data = val;
        t->next = top;
        top = t;
    }
};

int Stack::pop(){

    Node *t = top;
    int x = -1;
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{

        x = t->data;
        top = t->next;
       delete t;
    }

    return x;
}

void Stack::display()
{
    Node *t = top;

    while (t != NULL)
    {
        cout << t->data << endl;
        t = t->next;
    }
}

int main()
{
    Stack obj;   // ✅ object, not pointer

    obj.push(5);
    obj.push(10);
    obj.push(15);

    cout<<"poped item"<<obj.pop()<<endl;

    obj.display();

    return 0;
}
