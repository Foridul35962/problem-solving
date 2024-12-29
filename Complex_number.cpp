/*Write a c++ program to perform addition of two complex numbers using constructor overloading*/
#include<bits/stdc++.h>
using namespace std;
class Comp
{
    private:
        float real,img;
    public:
        Comp();
        Comp(float a,float b);
        Comp operator+(Comp &c);
        void dis();
};
Comp::Comp()
{
    real=0;
    img=0;
}
Comp::Comp(float a,float b)
{
    real=a;
    img=b;
}
Comp Comp::operator+(Comp &c)
{
    Comp temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
void Comp::dis()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
int main()
{
    float a,b,c,d;
    cout<<"Enter the first number of real and image: ";
    cin>>a>>b;
    cout<<"Enter the second number of real and image: ";
    cin>>c>>d;
    Comp obj1(a,b);
    Comp obj2(c,d);
    Comp obj3=obj1+obj2;
    cout<<"First number: ";
    obj1.dis();
    cout<<"Second number: ";
    obj2.dis();
    cout<<"Sum number: ";
    obj3.dis();
    return 0;
}