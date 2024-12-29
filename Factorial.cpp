/*Write a C++ program to enter any number and find its factorial using constructor.*/
#include<bits/stdc++.h>
using namespace std;
class Fact
{
    private:
        int n,i,result=1;
    public:
        Fact();
        void dis();
};
Fact::Fact()
{
    cout<<"Enter a number: ";
    cin>>n;
    for(i=n;i>=1;i--)
        result*=i;
}
void Fact::dis()
{
    cout<<"The Factorial of number is: "<<result<<endl;
}
int main()
{
    Fact obj;
    obj.dis();
    return 0;
}