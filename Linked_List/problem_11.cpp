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
            cout<<", ";
        }
    }
    cout<<"/"<<endl;
}



ListNode* combinedDuplicated(ListNode *p)
{
    int c=1;
    ListNode *combined_Node=NULL,*q,*r;
    q=combined_Node;
    while(p->next)
    {

        if(p->data==p->next->data)
        {
            c++;
        }
        else
        {
            if(combined_Node==NULL)
            {
                r=new ListNode;
                r->data=(p->data*c);
                cout<<p->data<<" <- first <-";
                r->next=NULL;
                combined_Node=r;
                q=combined_Node;
                c=1;

            }
            else{
            r=new ListNode;
            r->data=p->data*c;
            cout<<p->data<<" ";
            r->next=NULL;
            q->next=r;
            q=r;
            c=1;
            }

        }
        p=p->next;

    }
    r=new ListNode;
    r->data=p->data*c;
    r->next=NULL;
    q->next=r;
    q=r;
    cout<<endl;
    return combined_Node;
}




int main()
{
    int arr[17]={3,3,2,4,4,4,-1,-1,4,12,12,12,12,48,-5,-5};
    create_Front(Front,arr,16);
    display(Front);
    ListNode *x=combinedDuplicated(Front);
    display(x);
}

