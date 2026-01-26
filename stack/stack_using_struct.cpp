#include <bits/stdc++.h>
using namespace std;

struct Stack {
    int top;
    int size;
    int *s;
};

void create(Stack *st) {
    cout << "Enter the size: "<<endl;
    cin >> st->size;

    st->top = -1;
    st->s = new int[st->size];  // ✅ correct allocation
}

void push(Stack *st, int val) {
    if (st->top == st->size - 1) {
        cout << "Stack overflow" << endl;
    } else {
        st->top++;
        st->s[st->top] = val;
    }
}

int pop(struct Stack *st)
{
    /* data */
    int x = -1;

    if(st->top==-1){
        cout<<"stack under flow";
    }

    else{

        x = st->s[st->top];
       st->top--;
    }

    return x;

};

int peek(struct Stack st,int pos){

    int x = -1;

    if(st.top-pos+1<0){
        cout<<"invalid pos";
    }
    else{

        x = st.s[st.top-pos+1];
    }

    return x;
}

bool isFull(struct Stack st){

    return st.top == st.size-1;
}
bool isEmpty(struct Stack st){

    return st.top == -1;
}

int Top(struct Stack st){

    return st.top==-1?-1:st.s[st.top];
}


void display(Stack st) {
    cout << "Stack elements:" << endl;
    for (int i = st.top; i >= 0; i--) {
        cout << st.s[i] << endl;
    }
}

int main() {
    Stack st;
    create(&st);

    push(&st, 5);
    push(&st, 4);
    push(&st, 5);
    push(&st, 6);
    push(&st, 56);
//    cout<<isFull(st)<<endl;
//     cout<<pop(&st)<<endl;
//     cout<<pop(&st)<<endl;

//cout<<peek(st,4)<<endl;
cout<<Top(st)<<endl;
   
    display(st);

    delete[] st.s; // ✅ free memory
   
    return 0;
}
