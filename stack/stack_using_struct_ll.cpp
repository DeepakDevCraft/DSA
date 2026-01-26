#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */

    int data;
    Node *next;
} *top = NULL; // global pointer so you do need to pass pointer inside any method.

void push(int val)
{

    Node *t = new Node;

    if (t == NULL)
    {
        cout << "stack overflow";
    }
    else
    {
        t->data = val;
        t->next = top;
        top = t;
    }
}

int pop()
{

    Node *t = top;
    int x = -1;

    if (top == NULL)
    {
        cout << "stack empty";
    }
    else
    {
        x = t->data;
        top = t->next;
        delete t;
    }
    return x;
}


int peek(int pos){
Node *t = top;
int x = -1;

for(int i = 0; t!=NULL && i<pos-1;i++){

    t= t->next;
}

if(t!=NULL){
    x = t->data;//dont delete this t dangling pointer issue
   
    return x;
}

return x;

}

void display()
{

    Node *t = top;

    while (t != NULL)
    {

        cout << t->data << endl;
        t = t->next;
    }

    delete t;
}

int main()
{

    push(5);
    push(51);
    push(52);
    push(54);

    cout<<"poped item"<<peek(3)<<endl;

    display();
};
