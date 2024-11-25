#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    while(n--)
    {
        int x,a;
        cin>>x>>a;
        if(x==1)
            {
                s.insert(a);
            }
        else if(x==2)
            {
                s.erase(a);
            }
        else if(x==3)
            {
                int f=0;
                for(auto u:s)
                {
                    if(u==a)
                    {
                        cout<<"Yes"<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"No"<<endl;
            }
    }
    return 0;
}
