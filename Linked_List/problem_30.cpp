#include<iostream>
using namespace std;
struct ListNode
{
    double data;
    ListNode *next;
}*Front=NULL;


void create_Front(ListNode *&p,double arr[],int s)
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


void removeAllThreshold(ListNode *&p,double n, double f)
{
    double x=n-f;
    double y=n+f;
    ListNode *q=p,*r=p;
    if(p->data>=(n-f)&&p->data<=(n+f))
    {
        //cout<<p->data<<" "<<endl;
        q=q->next;
        p=q;
        r=q;
    }
    while(q)
    {
         if(q->data>=x&&q->data<=y)
         {
             //cout<<r->data<<" "<<q->data<<endl;
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
    double n=3.0,f=0.3;
    double arr[12]={3.0, 9.0, 4.2, 2.7, 3.3, 2.3, 3.4, 4.0, 2.9, 2.1, 3.1, 18.2};
    create_Front(Front,arr,12);
    display(Front);
    //cout<<"Bug"<<endl;
    cin>>n>>f;
    //cout<<n-f<<" "<<f+n<<endl;
    removeAllThreshold(Front,n,f);
    display(Front);
}

