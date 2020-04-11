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
    {
        p=NULL;
    }
}
int deleteBack(ListNode *p)
{
    string ex="Invalid Operation";
    int x=-1;
    try{
    if(p==NULL)
    {
        throw ex;
    }
    else
    {
        while(p->next)
            p=p->next;
        x= p->data;
        p=NULL;
    }
    return x;
    }
    catch(string ex)
    {
        cout<<ex<<endl;
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
    create_Front(Front);
    cout<<deleteBack(Front)<<endl;
    //display(Front);

}

