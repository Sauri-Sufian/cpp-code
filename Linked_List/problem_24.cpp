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

ListNode * mergeUpTo(ListNode *p,int n)
{
    int sum=0;
    ListNode *q=NULL,*r,*t;
    while(p)
    {
        sum+=p->data;
        if(sum>=n)
        {
            //cout<<sum<<endl;
            if(q==NULL)
            {
                q=new ListNode;
                q->data=sum;
                q->next=NULL;
                r=q;
                sum=0;
            }
            else
            {
                t=new ListNode;
                t->data=sum;
                t->next=NULL;
                r->next=t;
                r=t;
                sum=0;
            }
        }
        p=p->next;
    }
    r=q;
    return q;
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
    int n;
    int arr[11]={10,20,30,86,34,0,-2,10,60,22,15};
        create_Front(Front,arr,11);
    //display(Front);
    cin>>n;
    ListNode *q=mergeUpTo(Front,n);
    display(q);
}
