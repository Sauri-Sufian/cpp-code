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


int count_Duplicates(ListNode * p)
 {
     int c=0;
     while(p->next)
     {
         if(p->data==p->next->data)
         {
             c++;
         }
         p=p->next;
     }
     return c;
 }




int main()
{
    int arr[14]={1, 1, 1, 3, 3, 6, 9, 15, 15, 23, 23, 23, 40, 40};
    create_Front(Front,arr,14);
    cout<<count_Duplicates(Front)<<endl;
    //display(Front);
}

