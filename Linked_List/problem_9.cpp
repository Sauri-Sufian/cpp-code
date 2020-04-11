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


ListNode* chopBothSides(ListNode *&q,int n)
{
    if(n<=0)
        return NULL;
    int c=0;
    ListNode *p,*r;
    p=q;
    while(p)
    {
        c++;
        p=p->next;
    }
    p=q;
    //cout<<"Check point 1"<<endl;
    if(n*2<c)
    {
         //cout<<"Check point 2"<<endl;
        for(int i=0;i<c-n-1;i++)
        {
            //cout<<p->data<<" ";
            if(i==n)
            {
                //cout<<"<- ";
                r=p;
            }
            p=p->next;
        }
        p->next=NULL;
        q=r;
        // cout<<"Check point 3"<<endl;
    }
    else
    {
        return NULL;
    }
    return r;
}


int main()
{
    int arr[11]={10,20,30,40,50,60,70,80,90,100};
    ListNode *r;
    int n;
    //display(Front);
    create_Front(Front,arr,10);
    cin>>n;
    r=chopBothSides(Front,n);
    display(r);
    return 0;
}


