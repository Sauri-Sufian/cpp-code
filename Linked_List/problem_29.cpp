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

void removeAll(ListNode *&p,int target)
{
    ListNode *q=p,*r=p;
    if(target==q->data)
    {
        q=q->next;
        p=q;
        r=q;
    }
    while(q)
    {
        if(q->data==target)
        {
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
    create_Front(Front);
    display(Front);
    removeAll(Front,3);
    display(Front);
}

