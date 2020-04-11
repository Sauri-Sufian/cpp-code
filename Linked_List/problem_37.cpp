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




int  Size(ListNode *p)
{
    int i=0;
    if(p==NULL)
    {
        return i;
    }
    else{
    while(p)
    {
        p=p->next;
        i++;
    }
    }
    return i;
}

int main()
{
    create_Front(Front);
    cout<<Size(Front)<<endl;;
}


