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
    cin>>x;
    if(x>-1){
    if(p==NULL)
    {
        p=new ListNode;
        p->data=x;
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
    else
    {p=NULL;}
}



void insertion(ListNode *&p,int position,int value)
{
    ListNode *temp,*q;
    temp=new ListNode;
    temp->data=value;
    temp->next=NULL;

    if(position==0)
    {
        temp->next=p;
        p=temp;
    }
    else
    {
        q=p;
        for(int i=0;i<position-1;i++)
        {
            q=q->next;
        }
        temp->next=q->next;
        q->next=temp;

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
    int position,value;
    create_Front(Front);
    display(Front);
    cout<<"position - value "<<endl;
    cin>>position>>value;
    insertion(Front,position,value);
   display(Front);

}

