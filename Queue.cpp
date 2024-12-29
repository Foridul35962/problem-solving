#include<bits/stdc++.h>
using namespace std;
#define n 5
class Queue
{
    private:
        int queue[n];
        int front,rear;
    public:
        Queue()
        {
            front=-1;
            rear=-1;
        }
        void enqueue(int v);
        int dequeue();
        void display();
};
void Queue::enqueue(int v)
{
    if(rear==n-1)
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }
    if(front==-1)
        front=0;
    queue[++rear]=v;
    cout<<"Pushed "<<v<<" into the queue"<<endl;
}
int Queue::dequeue()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue Underflow"<<endl;
        return -1;
    }
    cout<<queue[front]<<" has been removed"<<endl;
    front++;
    if(front>rear)
    {
        front=rear=-1;
    }
}
void Queue::display()
{
    if(rear==-1||front>rear)
    {
        cout<<"Queue is empty."<<endl;
        return;
    }
    cout<<"Queue element: ";
    for(int i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
    cout<<endl;
}
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}