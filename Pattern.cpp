/*
1
6 1
10 5 1
13 8 4 1
15 10 6 3 1
16 11 7 4 2 1
*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    stack<int>v;
    cout<<"Enter the line number: ";
    cin>>n;
    int l,b;
    b=n;
        for(int i=1;i<=n;i++)
        {
            int a=1;
            l=b;
            for(int j=0;j<i;j++)
            {
                v.push(a);
                a+=l;
                l++;
            }
            b--;
            while(!v.empty())
            {
                cout<<v.top()<<" ";
                v.pop();
            }
            cout<<endl;
        }
    return 0;
}