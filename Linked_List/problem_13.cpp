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
        p=NULL;
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
int contains(ListNode *p,int n)
{
    int x=-1;
    while(p)
    {
        if(p->data==n)
            return 1;
        p=p->next;
    }
    return x;
}
int main()
{
    create_Front(Front);
    display(Front);
    int n,m;
    cin>>n;
    m=contains(Front,n);
    if(m==-1)
    cout<<"False"<<endl;
    else
        cout<<"True"<<endl;

}

