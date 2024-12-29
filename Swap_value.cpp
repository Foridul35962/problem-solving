/*Write a c++ program to swap two numbers declared in two different classes using friend function*/
#include<bits/stdc++.h>
using namespace std;
class Y;
class X
{
    private:
        int a;
    public:
        void dis();
        void get_data();
        friend void swap(X&,Y&);
};
class Y
{
    private:
        int b;
    public:
    void get_data();
    void dis();
    friend void swap(X&,Y&);
};
void X::get_data()
{
    cout<<"Enter the number of a: ";
    cin>>a;
}
void Y::get_data()
{
    cout<<"Enter the number of b: ";
    cin>>b;
}
void X::dis()
{
    cout<<"The value of a is: "<<a<<endl;
}
void Y::dis()
{
    cout<<"The value of b is: "<<b<<endl;
}
void swap(X&i,Y&j)
{
    int temp;
    temp=i.a;
    i.a=j.b;
    j.b=temp;
}
int main()
{
    X obj1;
    Y obj2;
    obj1.get_data();
    obj2.get_data();
    obj1.dis();
    obj2.dis();
    swap(obj1,obj2);
    cout<<"After swaping:"<<endl;
    obj1.dis();
    obj2.dis();
    return 0;
}