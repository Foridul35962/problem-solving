#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    for(int j=1;j<=t;j++)
    {
        for(int i=0;i<t;i++)
        {
            if(a[i]==j)
            {
                cout<<i+1<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}