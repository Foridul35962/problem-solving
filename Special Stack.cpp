#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void push(int a)
{
    s.push(a);
}
bool isFull(int n)
{
    if(s.size()==n)
        return 1;
    else
        return 0;
}
bool isEmpty()
{
    return s.empty();
}
void pop()
{
    s.pop();
}
int getMin()
{
    int min=INT_MAX;
    while(!s.empty())
    {
        if(s.top()<min)
        {
            min=s.top();
            s.pop();
        }
    }
    return min;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        while(!isEmpty())
        {
            pop();
        }
        while(!isFull(n))
        {
            cin>>a;
            push(a);
        }
        cout<<getMin()<<endl;
    }
    return 0;
}
