#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    string d,c=to_string(sum);
    d=c;
    reverse(d.begin(),d.end());
    if(c==d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
