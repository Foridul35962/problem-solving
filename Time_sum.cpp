/*Create a class TIME with members hours, minutes and seconds. Take input, add two time objects passing objects to function and display result.*/
#include<bits/stdc++.h>
using namespace std;
class Time
{
    private:
        int hours,minutes,seconds;
    public:
        Time();
        Time(int,int,int);
        Time operator+(Time &c);
        void dis();
};
Time::Time()
{
    hours=0;
    minutes=0;
    seconds=0;
}
Time::Time(int i,int j,int k)
{
    hours=i;
    minutes=j;
    seconds=k;
}
Time Time::operator+(Time &c)
{
    Time temp;
    temp.seconds=seconds+c.seconds;
    if(temp.seconds>=60)
    {
        temp.minutes=temp.seconds/60;
        temp.seconds=temp.seconds%60;
    }
    temp.minutes+=minutes+c.minutes;
    if(temp.minutes>=60)
    {
        temp.hours=temp.minutes/60;
        temp.minutes=temp.minutes%60;
    }
    temp.hours+=hours+c.hours;
    return temp;
}
void Time::dis()
{
    cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds."<<endl;
}
int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter first time: ";
    cin>>a>>b>>c;
    cout<<"Enter seconds time: ";
    cin>>d>>e>>f;
    Time obj1(a,b,c);
    Time obj2(d,e,f);
    Time obj3=obj1+obj2;
    cout<<"First time: ";
    obj1.dis();
    cout<<"Seconds time: ";
    obj2.dis();
    cout<<"After sum time: ";
    obj3.dis();
    return 0;
}