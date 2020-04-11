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


ListNode * expand(ListNode *p,int n)
{
    ListNode *expanded=NULL;
    ListNode *t,*q;
    q=expanded;
    while(p)
    {
        int x=p->data/n;
        for(int i=0;i<n;i++)
        {
            t=new ListNode;
            t->data=x;
            t->next=NULL;
            if(expanded==NULL)
            {
                expanded=t;
                q=expanded;
            }
            else
            {
                q->next=t;
                q=t;
            }


        }
        p=p->next;
    }
    return expanded;
}


int main()
{
    int arr[5]={12,34,-8,3,46},n;
    ListNode *x=NULL;


    create_Front(Front,arr,5);
    display(Front);
    cin>>n;
    x=expand(Front,n);
    display(x);

}


