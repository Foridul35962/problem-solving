#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,result=0,l=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        result+=a[i];
        sum-=a[i];
        l++;
        if(result>sum)
            break;
    }
    cout<<l<<endl;
    return 0;
}