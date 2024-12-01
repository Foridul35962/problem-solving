#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    priority_queue<int>q;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    while(m--)
    {
        int a;
        a=q.top();
        q.pop();
        ans+=a;
        a=a-1;
        q.push(a);
    }
    cout<<ans<<endl;
    return 0;
}
