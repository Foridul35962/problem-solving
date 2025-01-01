/*7 1 5 3 6 4
In this input we buy a product in lowest price and sell highest price.
But the day when we buy the product. then next anyday when price is highest we can sell this.
*/
/*Algorithm:
We intialise daily is selling day. If this day's price is greater than previous day.
then intialise this day is highest selling day. And check if this day's price is lower
than previous buying day. then intialise this is buying day.*/
#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
    cout<<"Enter the prices: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void check_profit(int a[],int n)
{
    int b=a[0],ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>b)
        {
            ans=max(ans,a[i]-b);//selling day-buying day for calculate profit
        }
        b=min(b,a[i]);//buying day
    }
    cout<<"Profit is: "<<ans<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of stock: ";
    cin>>n;
    int a[n];
    input(a,n);
    check_profit(a,n);
    return 0;
}