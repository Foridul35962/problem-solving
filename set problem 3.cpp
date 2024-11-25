#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    set<int>s;
    for(i=0;i<n;i++)
    {
        int b;
        cin>>b;
        s.insert(b);
    }
    for(auto u:s)
        cout<<u<<" ";
    cout<<endl;
    int x;
    cin>>x;
    if(s.count(x)==1)
    {
            cout<<"erased "<<x<<endl;
            s.erase(x);
            for(auto u:s)
                cout<<u<<" ";
            cout<<endl;
    }
    else
    {
        cout<<"Not Found"<<x<<endl;
    }
    return 0;
}
