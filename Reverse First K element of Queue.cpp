#include<bits/stdc++.h>
using namespace std;
/*In this program we use stack and queue both function.
In this problem we reverse k'th value from queue.
Input:t=1,n=5,k=3,queue= 1 2 3 4 5
Output= 3 2 1 4 5*/
queue<int>modifyQueue(queue<int>q,int k)
{
    stack<int>s;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    queue<int>f;
    while(!s.empty())
    {
        f.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        f.push(q.front());
        q.pop();
    }
    return f;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        queue<int>q;
        while(n--)
        {
            int a;
            cin>>a;
            q.push(a);
        }
        queue<int>ans=modifyQueue(q,k);
        while(!ans.empty())
        {
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
