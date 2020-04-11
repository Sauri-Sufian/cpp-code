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

void clump(ListNode *p,int n)
{
    ListNode *q=p,*q1,*q2;
                ListNode *temp;
    while(p)
    {
        int c=0;
        int x=p->data;
        q1=q;
        q=p->next;
        while(q)
        {
            if(x==q->data)
            {
                temp=q;
                q1->next=q->next;
                q1=q;
                q=q->next;
                temp->next=p->next;
                p->next=temp;
                cout<<temp->data<<endl;


            }
            else{
            q1=q;
            q=q->next;
            }
        }
        //cout<<endl;
        //cout<<"Test 3"<<endl;
        //cout<<x<<"->"<<c<<endl;
        p=p->next;
    }
   // cout<<temp->data<<endl;
}

int main()
{
    int n;
    create_Front(Front);
    display(Front);

    clump(Front,n);
    //cin>>n;
    display(Front);
}


