#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans=0;
        cin>>a>>b;
        int c=a+b;
        for(int i=1;c>=i;i++)
        {
            c=c-i;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}