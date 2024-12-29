#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n],t,i;
    cout<<"Enter the sorted elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    cout<<"Enter the target sum: ";
    cin>>t;
    while(i<n)
    {
        int s=a[i]+a[n];
        if(s<t)
            i++;
        else if(s>t)
            n--;
        else if(s==t)
            break;
    }
    cout<<"Location of element is: "<<i+1<<" and "<<n+1<<endl;
    cout<<"The element is: "<<a[i]<<" and "<<a[n]<<endl;
    return 0;
}