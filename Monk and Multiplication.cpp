#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '/n'
int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    priority_queue<int>q;
    for(auto u:v)
    {
        q.push(u);
        if(q.size()>=3)
        {
            int a1,a2,a3,ans=0;
            a1=q.top();
            q.pop();
            a2=q.top();
            q.pop();
            a3=q.top();
            q.pop();
            cout<<a1*a2*a3<<endl;
            q.push(a1);
            q.push(a2);
            q.push(a3);
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}