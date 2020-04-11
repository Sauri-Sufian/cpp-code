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


void surrounded(ListNode *&p1,int target,int value)
{
    ListNode *q=NULL,*t,*p=p1;
    if(p->data==target)
    {
        t=new ListNode;
        t->data=value;
        t->next=p->next;
        p->next=t;
        t=new ListNode;
        t->data=value;
        t->next=p;
        p1=t;
        p=p->next->next;

    }
    while(p)
    {
        if(p->data==target)
        {
            t=new ListNode;
        t->data=value;
        t->next=p->next;
        p->next=t;
        t=new ListNode;
        t->data=value;
        t->next=p;
        q->next=t;
        p=p->next->next;


        }
        else{

        q=p;
        p=p->next;
        }
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

int main()
{
    int arr[6]={1,2,3,4,2,5};
        create_Front(Front,arr,6);
        display(Front);
        int target,value;
        cin>>target>>value;
        surrounded(Front,target,value);
        display(Front);


}

