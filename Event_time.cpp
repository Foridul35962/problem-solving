#include<iostream>
using namespace std;
int main()
{
    char a[6],b[6],c[2],g[2],e[2],f[2];
    int d1,d2,h1,h2,m1,m2,s1,s2,d,h,m,s;
    cin>>a>>d1>>h1>>c>>m1>>g>>s1;
    cin>>b>>d2>>h2>>e>>m2>>f>>s2;
    if(s2<s1)
    {
        s=60-(s1-s2);
        m2=m2-1;
        if(m2<m1)
        {
            m=60-(m1-m2);
            h2=h2-1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else if(m2==m1)
        {
            m=0;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else
        {
            m=m2-m1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
    }
    else if(s2==s1)
    {
        s=0;
        if(m2<m1)
        {
            m=60-(m1-m2);
            h2=h2-1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else if(m2==m1)
        {
            m=0;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else
        {
            m=m2-m1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
    }
    else
    {
        s=s2-s1;
        if(m2<m1)
        {
            m=60-(m1-m2);
            h2=h2-1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else if(m2==m1)
        {
            m=0;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
        else
        {
            m=m2-m1;
            if(h2<h1)
            {
                h=24-(h1-h2);
                d2=d2-1;
                d=d2-d1;
            }
            else if(h2==h1)
            {
                h=0;
                d=d2-d1;
            }
            else
            {
                h=h2-h1;
                d=d2-d1;
            }
        }
    }
    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
    return 0;
}
