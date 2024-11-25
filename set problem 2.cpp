#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<int>s;
    while(t--)
    {
        char a;
        int b;
        cin>>a;
        if(a=='e')
        {
            cout<<s.size()<<endl;
        }
        else if(a=='b')
        {
            for(auto u:s)
                cout<<u<<" ";
            cout<<endl;
        }
        else
        {
            cin>>b;
            if(a=='a')
            {
                s.insert(b);
            }
            else if(a=='c')
            {
                s.erase(b);
            }
            else if(a=='d')
            {
                if(s.count(b)==1)
                    cout<<"1"<<endl;
                else
                    cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
