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


void removeRange(ListNode *&p,int start,int finish)
{
    ListNode *q=p,*r=p;
    if(p->data>=start&&p->data<=finish)
    {
        //cout<<p->data<<" "<<endl;
        q=q->next;
        p=q;
        r=q;
    }
    while(q)
    {
         if(q->data>=start&&q->data<=finish)
         {
             //cout<<r->data<<" "<<q->data<<endl;
             r->next=q->next;
             q=q->next;

         }
         else{
         r=q;
         q=q->next;
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
    int start,finish;
    int arr[13]={4, 2, 1, 10, 15, 8, 7, 4, 20, 36, -3, 40, 5};
    create_Front(Front,arr,13);
    display(Front);
    cin>>start>>finish;
    removeRange(Front,start,finish);
    display(Front);
}

