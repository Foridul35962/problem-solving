#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        vector<int>v;
        map<int,int>cnt;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(auto u:v)
            cnt[u]++;
        for(auto u:cnt)
        {
            ans+=(u.second/2);
        }
        cout<<ans<<endl;
    }
}