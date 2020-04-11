#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front=NULL;

void create_Front(ListNode *&p)
{
    if(p==NULL)
    {
        p=new ListNode;
        cin>>p->data;
        p->next=NULL;
    }
    ListNode *t;
    t=p;
    while(1)
    {
        ListNode *r;
        r=new ListNode;
        cin>>r->data;
        if(r->data<0)
            break;
        else{
        r->next=NULL;
        t->next=r;
        t=r;
        }

    }
}

void doubleList(ListNode *p)
{
    ListNode *q,*t,*duplicate=NULL,*q1,*r;
    r=q=p;
    q1=duplicate;
    while(q)
    {
        if(duplicate==NULL)
        {
            t=new ListNode;
            t->data=q->data;
            t->next=NULL;
            duplicate=t;
            q1=duplicate;
            q=q->next;

        }
        t=new ListNode;
        t->data=q->data;
        t->next=NULL;
        q1->next=t;
        q1=t;
       q=q->next;
       r=r->next;


    }
    r->next=duplicate;


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
            cout<<" ";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    doubleList(Front);
    display(Front);
}

