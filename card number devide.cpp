#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,p1=0,p2=0,f=1;//p1 and p2 are persons all card number
    for(i=0;i<n;i++)
    {
        cin>>a[i];//all card number inputing
    }
    int l=0,r=n-1;//l is left and r is right position
    while(l<=r)
    {
        if(a[l]>a[r])
        {
            if(f%2!=0)
            {
                p1+=a[l];
                l++;
                f++;
            }
            else
            {
                p2+=a[l];
                l++;
                f++;
            }
        }
        else
        {
            if(f%2!=0)
            {
                p1+=a[r];
                r--;
                f++;
            }
            else
            {
                p2+=a[r];
                r--;
                f++;
            }
        }
    }
    cout<<p1<<" "<<p2<<endl;
    return 0;
}
