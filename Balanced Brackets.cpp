#include<bits/stdc++.h>
using namespace std;
bool check(char c1,char c2)
{
    if((c1=='('&& c2==')')||(c1=='{'&& c2=='}')||(c1=='['&& c2==']'))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char>st;
        bool d=1;
        for(auto u:s)
        {
            if(u=='('||u=='{'||u=='[')
                st.push(u);
            else
            {
                if(st.empty())
                {
                    d=0;
                    break;
                }
                else
                {
                    if(check(st.top(),u))
                    {
                        st.pop();
                    }
                    else
                    {
                        d=0;
                        break;
                    }
                }
            }
        }
        if(d)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}