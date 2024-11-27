#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    stack<int>st;
    for(auto u:v)
    {
        if(u.size() > 1 || isdigit(u[0]))
        {
            st.push(stoi(u));
        }
        else if(u=="+")
        {
            int a=st.top();
            st.pop();
            if(!st.empty())
            {
                int b=st.top();
                st.push(a);
                int c=a+b;
                st.push(c);
            }
            else
            {
                st.push(a);
                st.push(a);
            }
        }
        else if(u=="D")
        {
            st.push(2*st.top());
        }
        else if(u=="C")
        {
            st.pop();
        }
    }
    int sum=0;
    while(!st.empty())
    {
        sum+=st.top();
        st.pop();
    }
    cout<<sum<<endl;
    return 0;
}
