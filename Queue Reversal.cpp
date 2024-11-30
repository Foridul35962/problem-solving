#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<int>q;
        while(n--)
        {
            int a;
            cin>>a;
            q.push(a);
        }
        stack<int>s;
        while(!q.empty())
        {
            s.push(q.front());
            q.pop();
        }
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}
