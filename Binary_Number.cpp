/*In this Problem we convert decimal to binary number.
Then find the maximum group of 1.
Like 5=101 - in this number 1 is group in 1 member.
again 6=110 - in this number 1 is group in 2 member.*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,f,b=0;
    vector<int>s;
    cin>>n;
    while(n>0)
    {
        int a=n%2;
        s.push_back(a);
        n=n/2;
    }
    string t;
    vector<string>v;
    for(auto u:s)
    {
        if(u==1)
        {
            t+=u;
        }
        else
        {
            v.push_back(t);
            t.clear();
        }
    }
    v.push_back(t);
    int m=0;
    for(auto u:v)
    {
        if(m<u.size())
            m=u.size();
    }
    cout<<m<<endl;
    return 0;
    
}