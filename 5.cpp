#include <bits/stdc++.h>
using namespace std;

const int N = 100;

class Queue
{
public:
    int a[N];
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    void enqueue(int value)
    {
        if(sz == N)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r == N)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l==N)
        {
            l = 0;
        }
        sz--;
    }
    int Front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
};

int main()
{
    Queue q;
    q.enqueue(15);
    q.enqueue(60);
    q.enqueue(72);


    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();


    return 0;
}
