#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,b,c;
        char a;
        cin>>a;
        getline(cin,s);
        s=a+s;
        vector<string>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(b);
                b.clear();
            }
            else
            {
                b+=s[i];
            }
        }
        v.push_back(b);
        b.clear();
        int max=0;
        map<string,int>cnt;
        for(auto u:v)
        {
            cnt[u]++;
            if(max<cnt[u])
            {
                max=cnt[u];
                c=u;
            }
        }
        cout<<c<<" "<<max<<endl;
    }
    return 0;
}