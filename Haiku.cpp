#include<bits/stdc++.h>
using namespace std;
int check_vowel(string a)
{
    int c=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            c++;
    }
    return c;
}
int main()
{
    char e;
    int f=0;
    string a,g,h;
    cin>>e;
    getline(cin,a);
    a=e+a;
    cin>>e;
    getline(cin,g);
    g=e+g;
    cin>>e;
    getline(cin,h);
    h=e+h;
    int b= check_vowel(a);
    if(b==5)
    {
        b=check_vowel(g);
        if(b==7)
        {
            b=check_vowel(h);
            if(b==5)
                f=1;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
