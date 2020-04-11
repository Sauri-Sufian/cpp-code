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




void linkedListMystery(ListNode*& front) {
ListNode* curr = front;
while (curr->next != NULL) {
ListNode* temp = curr->next;
if (curr->data >= curr->next->data) {
curr->next = temp->next;
if (curr->data == temp->data) {
curr->next = temp->next;
delete temp;
} else {
temp->next = front;
front = temp;
}
} else {
curr = curr->next;
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
    int arr[8]={25,40,50,10,8,60,60,37};
    create_Front(Front,arr,8);
    linkedListMystery(Front);
    display(Front);
}
