#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int i,n,p,item;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter all element: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    /*Insertion an element into array*/
    cout<<"Enter the insertion position: ";
    cin>>p;
    p--;
    cout<<"Enter the item: ";
    cin>>item;
    for(i=n;i>=p;i--)
        a[i+1]=a[i];
    a[p]=item;
    n++;
    cout<<"After insertion all element in array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    /*Deleting an element into array*/
    cout<<"Enter the deleting element position: ";
    cin>>p;
    p--;
    for(i=p;i<n-1;i++)
        a[i]=a[i+1];
    n--;
    cout<<"After deletion all element in array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}