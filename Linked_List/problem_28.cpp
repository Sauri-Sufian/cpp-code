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


int  removeNode(ListNode *p,int place)
{
    int x=-1;
    ListNode *q,*r;
    q=p;

    if(place==0)
    {
        x=p->data;
        p=p->next;

    }
    else
    {
        for(int i=0;i<place-1;i++)
        {
            q=q->next;
        }
        r=q->next->next;

        x=q->next->data;
        q->next=r;

    }
    return x;
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
            cout<<",";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    display(Front);
    //cout<<removeNode(Front,1)<<endl;
    removeNode(Front,2);
   // cout<<removeNode(Front,0)<<endl;
    display(Front);
}


