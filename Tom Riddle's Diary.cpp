#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int>cnt;
    while(t--)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        cnt[s]++;
        if(cnt[s]>1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}