#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front=NULL;

void create_Front(ListNode *&p,int arr[],int s)
{
    ListNode *rest,*t;
    p=new ListNode;
    p->data=arr[0];
    p->next=NULL;
    t= p;
    for(int i=1;i<s;i++)
    {
        rest= new ListNode;
        rest->data=arr[i];
        rest->next=NULL;
        t->next=rest;
        t= rest;
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
            cout<<"-> ";
        }
    }
    cout<<"/"<<endl;
}



ListNode* braid(ListNode *&t)
{
    ListNode *p1,*p,*q,*r,*reversed;
    p=t;
    p1=new ListNode;
    p1->data=p->data;
    p1->next=NULL;
    q=p1;
    p=p->next;
    q->next=p;
    while(p)
    {
        r=new ListNode;
        r->data=p->data;
        r->next=NULL;
        q->next=r;
        q=r;
        p=p->next;
    }
    p=t;
    q=r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;


    }
    r=reversed=q;
    p=p1;
    ListNode *braidNode=NULL,*pb;
    pb=braidNode=p;
    while(p)
    {
        p=p->next;
        pb->next=r;
        //cout<<pb->data<<" ";
        pb=pb->next;
        r=r->next;
        pb->next=p;
        //cout<<pb->data<<" ";
        pb=pb->next;
    }

    return *&braidNode;
}
int main()
{
    int arr[4]={10,20,30,40};
    create_Front(Front,arr,4);
    ListNode *r;
    r=braid(Front);
    display(r);
}

