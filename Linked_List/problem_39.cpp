#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front=NULL;


void create_Front(ListNode *&p)
{
    int x;
    ListNode *q,*r,*t;
    q=p;
    while(cin>>x)
    {
        t=new ListNode;
        t->data=x;
        t->next=NULL;
        if(p==NULL)
        {
            p=t;
            q=p;
        }
        else
        {
            t=new ListNode;
        t->data=x;
        t->next=NULL;

        q->next=t;
        q=t;
        }
    }
}


void stutter(ListNode *&List)
{
    ListNode *p=List,*q=NULL,*t;

    while(p)
    {
        q=p->next;
        t=new ListNode;
        t->data=p->data;
        t->next=p->next;
        p->next=t;
        p=q;


    }
}

void display(ListNode *p)
{
    cout<<"front -> ";
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
        if(p)
        {
            cout<<", ";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    display(Front);
    stutter(Front);
    display(Front);

}


