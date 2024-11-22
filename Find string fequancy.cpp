#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int result=0;
    vector<string>v;
    cin>>t;
    while(t--)
    {
        
        int f;
        cin>>f;
        for(int i=0;i<f;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        map<string,int>cnt;
        for(auto u:v)
            cnt[u]++;
        for(int i=0;i<v.size();i++)
        {
            if(cnt[v[i]]==2)
                result++;
        }
        cout<<result/2<<endl;
        v.clear();
    }
    return 0;
}
