#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev,*next;
};
class d_linkedlist
{
public:
    node *head,*tail;
    int sz;
    d_linkedlist()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    node *create_new_node(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->prev = NULL;
        temp->next = NULL;
        return temp;
    }
    void insert_at_head(int value)
    {
        sz++;
        node *a = create_new_node(value);
        if(head==NULL)
        {
            head = a;
            tail=a;
            return ;
        }
        a->next = head;
        head->prev = a;
        head=a;
    }
    void insert_at_tail(int value)
    {
        sz++;
        node *a = create_new_node(value);
        if(head==NULL)
        {
            head = a;
            tail=a;
            return ;
        }
        tail->next = a;
        a->prev = tail;
        tail=a;
    }

    void insert_at_mid(int value)
    {
        int mid = sz/2;
        node *a = create_new_node(value);
        if(head==NULL)
        {
            head = a;
            tail=a;
            return ;
        }
        node *temp=head;
        while(mid--)
        {
            temp=temp->next;
        }
        node *temp1=temp->prev;
        temp1->next = a;
        a->prev =temp1;
        a->next=temp;
        temp->prev =a;
        sz++;
    }
    void print()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    void Merge(d_linkedlist b)
    {
        tail->next = b.head;
    }
};
int main()
{
    d_linkedlist a;
	d_linkedlist b;

    a.insert_at_head(1);
    a.insert_at_tail(5);
    a.insert_at_mid(3);
    a.insert_at_head(0);
    a.insert_at_tail(10);
    a.print(); // prints  0 1 3 5 10

    b.insert_at_head(10);
	b.insert_at_tail(50);
	b.insert_at_mid(30);
	b.insert_at_head(9);
	b.insert_at_tail(100);
	b.print(); // prints  0 1 3 5 10

	a.Merge(b);
	a.print();
	b.print();


    return 0;
}


