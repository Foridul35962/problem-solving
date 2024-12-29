/*Write a c++ program to find the square and cube of a number read from keyboad. (Demonstrate the concept of inheritance)*/
#include<bits/stdc++.h>
using namespace std;
class Square
{
    private:
        int n;
    public:
        void get_data();
        int get_n();
        void square();
};
int Square::get_n()
{
    return n;
}
void Square::get_data()
{
    cout<<"Enter the number: ";
    cin>>n;
}
void Square::square()
{
    cout<<"Square of number: "<<n*n<<endl;
}
class Cube:public Square
{
    int c;
    public:
        void cube();
};
void Cube::cube()
{
    c=get_n();
    cout<<"Cube of number: "<<c*c*c<<endl;
}
int main()
{
    Cube obj;
    obj.get_data();
    obj.square();
    obj.cube();
    return 0;
}