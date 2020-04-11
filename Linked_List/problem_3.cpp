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


void linkedListMystery2(ListNode*& front) {
ListNode* curr = front;
ListNode* prev = NULL;
while (curr->next != NULL) {
if (curr->data % 2 == 0 && prev != NULL) {
prev->next = curr->next;
} else {
curr->data--;
}
prev = curr;
curr = curr->next;
}
}


int main()
{
    int arr[11]={1,2,4,3,5,7,11,0,6,1,1};
    create_Front(Front,arr,11);
    linkedListMystery2(Front);
    display(Front);
    return 0;
}
