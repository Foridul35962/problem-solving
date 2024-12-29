/*Create a class student which has data members as name, semester, roll no, section and marks in five subjects.
Write a c++ program to display all information of the students with total marks.*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
        string name,semester,section;
        int roll_no,mark[5],sum=0,i;
    public:
        void get_data();
        void dis();
};
void Student::get_data()
{
    cout<<"Enter name: ";
    char c;
    cin>>c;
    getline(cin,name);
    name=c+name;
    cout<<"Enter roll no: ";
    cin>>roll_no;
    cout<<"Enter semester: ";
    cin>>semester;
    cout<<"Enter section: ";
    cin>>section;
    cout<<"Enter 5 marks: ";
    for(i=0;i<5;i++)
    {
        cin>>mark[i];
        sum+=mark[i];
    }
}
void Student::dis()
{
    cout<<"Student name: "<<name<<endl;
    cout<<"Student roll no: "<<roll_no<<endl;
    cout<<"Student semester: "<<semester<<endl;
    cout<<"Student section: "<<section<<endl;
    cout<<"Student get marks: ";
    for(i=0;i<5;i++)
        cout<<mark[i]<<" ";
    cout<<endl;
    cout<<"Total marks: "<<sum<<endl;
}
int main()
{
    Student obj;
    obj.get_data();
    obj.dis();
    return 0;
}