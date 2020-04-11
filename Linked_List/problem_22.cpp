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

int isSorted(ListNode *q)
{
    ListNode *p=q;
    int x=1,y=1;
    while(p->next)
    {
        if(p->data>p->next->data)
        {
            x=-1;
            break;
        }
        p=p->next;
    }
    p=q;
    while(p->next)
    {
        if(p->data<p->next->data)
        {
            y=-1;
            break;
        }
        p=p->next;
    }
    if(x==1||y==1)
        return 1;
    else
        return -1;
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
if(isSorted(Front)==1)
{
    cout<<"Sorted"<<endl;
}
else
    cout<<"Not sorted"<<endl;


}


