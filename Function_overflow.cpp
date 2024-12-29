/*Write a c++ program for calculating the area of triangle, circle and rectangle using the concept of function overloading*/
#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416
void area(float r)
{
    cout<<"The area of circle is: "<<PI*r*r<<endl;
}
void area(float b,float h)
{
    cout<<"The area of triangle is: "<<0.5*b*h<<endl;
}
void area(int l,int w)
{
    cout<<"The area of rectangle is: "<<l*w<<endl;
}
int main()
{
    float radius,base,height;
    int length, width;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter the base and height: ";
    cin>>base>>height;
    cout<<"Enter the length and width: ";
    cin>>length>>width;
    area(radius);
    area(base,height);
    area(length,width);
    return 0;
}