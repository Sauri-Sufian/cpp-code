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

void replaceNode(ListNode *p,int place,int value)
{
    if(place==0)
    {
        p->data=value;
    }
    else
    {
        for(int i=0;i<place;i++)
        {
            p=p->next;
        }
        p->data=value;
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
    int arr[5]={8, 23, 46, 7, 102};
    create_Front(Front,arr,5);
    display(Front);
    int place,value;
    cin>>place>>value;
    replaceNode(Front,place,value);
    display(Front);


}

