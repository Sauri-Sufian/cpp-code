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


void addBack(ListNode *&p,int addData)
{
    if(p==NULL)
    {
        p =new ListNode;
        p->data=addData;
        p->next=NULL;
    }
    else{
        ListNode *q,*new_Node;
        q=p;
    while(q->next)
    {
        q=q->next;
    }
        new_Node= new ListNode;
        new_Node->data=addData;
        new_Node->next=NULL;
            q->next=new_Node;
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
    int arr[5]={8,23,19,7,102};
    create_Front(Front,arr,5);
    int addData;
    cin>>addData;
    addBack(Front,addData);
    display(Front);
}


