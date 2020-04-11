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

ListNode* transferEvens(ListNode *p)
{
    int i=2;
    ListNode *q,*r,*t;
    q=new ListNode;
    q->data=p->data;
    q->next=NULL;
    r=q;
    p=p->next->next;
    while(p)
    {
        if(i%2==0){
        t=new ListNode;
        t->data=p->data;
        t->next=NULL;
        r->next=t;
        r=t;}
        p=p->next;
        i++;
    }
    //cout<<p->data<<endl;
    return q;
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
    int arr[20]={3,1,4,15,9,2,6,5,35,89,66,12,14,15};
    create_Front(Front,arr,11);
    display(Front);
   ListNode *q= transferEvens(Front);
   display(q);

}

