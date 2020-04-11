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
    q->next=p;
}

void rotateList(ListNode *&p)
{
    p=p->next;
}


void display(ListNode *p)
{
    ListNode *q=p;
    //cout<<"front -> ";
    do
    {
        cout<<p->data<<" ";
        p=p->next;
        if(p)
        {
            cout<<"-> ";
        }
    }while(p!=q);
    cout<<"/"<<endl;
}

int main()
{
    create_Front(Front);
    display(Front);
    rotateList(Front);
    display(Front);
}

