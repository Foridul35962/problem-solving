#include<bits/stdc++.h>
using namespace std;
void get_data(int n,set<int>&s)
{
    int a,i;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
}
int main()
{
    int l,n,m;
    cin>>l;
    cin>>n;
    set<int>s;
    get_data(n,s);
    cin>>m;
    get_data(m,s);
    if(l==s.size())
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
