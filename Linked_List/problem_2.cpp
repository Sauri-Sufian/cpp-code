#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front1=NULL,*Front2=NULL;

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

void linkedListMystery11(ListNode*& front1, ListNode*& front2)
 {
    ListNode* curr1 = front1;
    while (front2 != NULL)
        {
    if (curr1->next == NULL)
    {
    curr1->next = front2;
    front2 = NULL;
    }
    else if (front2->data < curr1->next->data)
        {
    ListNode* temp2 = front2;
    front2 = front2->next;
    temp2->next = curr1->next;
    curr1->next = temp2;
    }
    else {
    curr1 = curr1->next;
    }
    }
}
int main()
{
    int arr1[4]={2,7,5,33};
    int arr2[6]={1,10,9,8,66,55};
    create_Front(Front1,arr1,4);
    create_Front(Front2,arr2,6);
    linkedListMystery11(Front1,Front2);
    display(Front1);
    display(Front2);

    return 0;
}
