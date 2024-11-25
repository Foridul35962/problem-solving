#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    map<int,int>cnt;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
        cnt[a]++;
    }
    int p=0;
    for(auto u:cnt)
    {
        if(u.second>1)
        {
            cout<<"True"<<endl;
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"False"<<endl;
    return 0;
}