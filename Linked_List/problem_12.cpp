#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front1=NULL,*Front2=NULL;

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

void consume(ListNode *&p,ListNode *&q)
{
    ListNode *t=p;
    while(t->next)
        t=t->next;
    t->next=q;
    q=NULL;


}

int main()
{
    int arr1[4]={1,3,5,7};
    int arr2[3]={2,4,6};
    create_Front(Front1,arr1,4);
    create_Front(Front2,arr2,3);
    consume(Front1,Front2);
    display(Front2);
    display(Front1);
}

