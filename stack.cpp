#include<bits/stdc++.h>
using namespace std;
#define n 5
class Stack
{
    private:
        int stack[n];
        int top;
    public:
        Stack()
        {
            top=-1;
        }
        void push(int v);
        int pop();
        void display();
};
void Stack::push(int v)
{
    if(top==n-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    stack[++top]=v;
    cout<<"Pushed "<<v<<" into the stack"<<endl;
}
int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    return stack[top--];
}
void Stack::display()
{
    if(top==-1)
    {
        cout<<"Stack is empty."<<endl;
        return;
    }
    cout<<"Stack element: ";
    for(int i=0;i<=top;i++)
        cout<<stack[i]<<" ";
    cout<<endl;
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout<<"Popped: "<<s.pop()<<endl;
    s.display();
    return 0;
}