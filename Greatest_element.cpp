/*Write a c++ program to find the greatest of three given numbers in three different classes using friend function*/
#include<bits/stdc++.h>
using namespace std;
class b;
class c;
class a
{
    private:
        int x;
    public:
        void get_data()
        {
            cin>>x;
        }
        friend void max(a&,b&,c&);
};
class b
{
    private:
        int y;
    public:
        void get_data()
        {
            cin>>y;
        }
        friend void max(a&,b&,c&);
};
class c
{
    private:
        int z;
    public:
        void get_data()
        {
            cin>>z;
        }
        friend void max(a&,b&,c&);
};
void max(a&i,b&j,c&k)
{
    int max=0;
    if(i.x>j.y && i.x>k.z)
        max=i.x;
    else if(j.y>i.x && j.y>k.z)
        max=j.y;
    else
        max=k.z;
    cout<<"The maximum element is: "<<max<<endl;
}
int main()
{
    a obj1;
    b obj2;
    c obj3;
    cout<<"Enter 3 element: ";
    obj1.get_data();
    obj2.get_data();
    obj3.get_data();
    max(obj1,obj2,obj3);
    return 0;
}