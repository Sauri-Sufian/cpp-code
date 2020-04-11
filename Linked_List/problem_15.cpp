#include<iostream>
#include<string.h>
using namespace std;
struct ListNode
{
    string data;
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
        if(r->data=="!")
            break;
        else{
        r->next=NULL;
        t->next=r;
        t=r;
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


int count_Duplicates(ListNode * p)
 {
     int c=0;
     while(p->next)
     {
         if(p->data==p->next->data)
         {
             c++;
         }
         p=p->next;
     }
     return c;
 }




int main()
{
    create_Front(Front);
    cout<<count_Duplicates(Front)<<endl;
   // display(Front);
}

