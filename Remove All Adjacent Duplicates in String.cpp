#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(auto u:s)
    {
        if(!st.empty()&&u==st.top())
        {
            st.pop();
        }
        else
        {
            st.push(u);
        }
    }
    string a;
    while(!st.empty())
    {
        a+=st.top();
        st.pop();
    }
    reverse(a.begin(),a.end());
    cout<<a<<endl;
}
