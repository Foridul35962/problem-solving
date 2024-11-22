#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>cnt;
    for(auto u:a)
    {
        cnt[u]++;
    }
    for(auto u:cnt)
    {
        if(u.first>u.second)
        {
            ans+=u.second;
        }
        else if(u.first<u.second)
        {
            ans+=u.second-u.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
