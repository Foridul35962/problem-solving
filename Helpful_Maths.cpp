#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    float b=s.size()/2.0;
    int c=ceil(b);
    int a[c];
    int j=0;
    for(int i=0;i<s.size();i=i+2)
    {
        char y=s[i];
        a[j]=y-'0';
        j++;
    }
    sort(a,a+j);
    cout<<a[0];
    for(int i=1;i<j;i++)
    {
        cout<<"+"<<a[i];
    }
    cout<<endl;
    return 0;
}