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


void split(ListNode *&List)
{
    ListNode *p,*q,*r=NULL,*t;
    p=q=List;
    if(p->data>0){
    while(p)
    {
        if(p->data<0)
        {
            r->next=p->next;
            t=p;
            p=p->next;
            t->next=q;
            q=t;
        }
        else{
        r=p;
        p=p->next;
        }
    }
    }
    List =q;

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
            cout<<" , ";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    display(Front);
    split(Front);
    display(Front);
}


