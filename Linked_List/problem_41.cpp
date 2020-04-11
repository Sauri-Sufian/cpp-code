#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
};


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

void switchEvens(ListNode *p,ListNode *q)
{
    int temp;
    while(p&&q)
    {
        if(p->data%2==0&&q->data%2==0){
            temp=p->data;
            p->data=q->data;
            q->data=temp;

        }
        p=p->next;
        q=q->next;
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
    ListNode *Front1=NULL,*Front2=NULL;

    int arr1[10]={2,4,3,7,8,4,6,12,22,10};
    int arr2[8]={66,55,16,43,22,90,39,44};
    create_Front(Front1,arr1,10);
    create_Front(Front2,arr2,8);
    switchEvens(Front1,Front2);
    display(Front1);
    display(Front2);

}

