#include<bits/stdc++.h>
using namespace std;
void input (int a[],int n)
{
    cout<<"Enter all container height: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int main()
{
    int n;
    cout<<"How many bound in container: ";
    cin>>n;
    int a[n];
    input(a,n);
    int max_water=0,lb=0,ub=n-1;
    while(lb<ub)
    {
        int d=ub-lb;
        int w=min(a[ub],a[lb])*d;
        max_water=max(max_water,w);
        if(a[ub]<a[lb])
            ub--;
        else
            lb++;
    }
    cout<<"Maximum Capacity: "<<max_water<<endl;
    return 0;
}