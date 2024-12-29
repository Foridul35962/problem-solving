#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n;
    cout<<"Enter the value of array: ";
    cin>>n;
    int a[n],i,sum=INT_MIN,cs=0;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cs+=a[i];
        sum=max(cs,sum);
        if(cs<0)
            cs=0;
    }
    cout<<"Maximum sum: "<<sum<<endl;
    return 0;
}