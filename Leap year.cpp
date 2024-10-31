#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,m,y1,y2,i,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int b=0;
        cin>>d>>m>>y1>>y2;
        if(d==29&&m==2)
        {
            for(i=y1+1;i<=y2;i++)
            {
                if((i%4==0&&i%100!=0)||i%400==0)
                {
                    b++;
                }
            }
        }
        else
        {
            for(i=y1+1;i<=y2;i++)
            {
                b++;
            }
        }
        cout<<"Case "<<j<<": "<<b<<endl;
    }
    return 0;
}
