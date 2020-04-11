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



void linkedListMystery(ListNode*& front1, ListNode*& front2) {
while (front1->data < front2->data) {
ListNode* trash = front1;
front1 = front1->next;
delete trash;
}
ListNode* curr1 = front1;
ListNode* curr2 = front2;
while (curr1->next != NULL && curr2->next != NULL) {
if (curr1->next->data < curr2->next->data) {
ListNode* temp = curr1->next;
curr1->next = curr2->next;
curr2->next = temp;
} else {
curr2 = curr2->next;
}
}
}


int main()
{
    int arr1[6]={2,5,3,8,15,9};
    int arr2[6]={4,6,12,7,16,99};

    create_Front(Front1,arr1,6);
    create_Front(Front2,arr2,6);
    linkedListMystery(Front1,Front2);
    display(Front1);
    display(Front2);

}

