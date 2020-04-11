#include<iostream>
using namespace std;
struct ListNode
{
    int data;
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
        if(r->data<0)
            break;
        else{
        r->next=NULL;
        t->next=r;
        t=r;
        }

    }
}


int getValue(ListNode *p,int n)
{
    int x;
    if(n==0)
    {
       x=p->data;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            //cout<<p->data<<endl;
            p=p->next;
        }
        x=p->data;
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
            cout<<"-> ";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    display(Front);
    int n;
    cin>>n;
    cout<<getValue(Front,n)<<endl;

}


