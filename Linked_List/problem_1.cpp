#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;
}*Front=NULL;

void create_Node(int arr[],int s)
{
    Front= new ListNode;
    Front->data=arr[0];
    Front->next=NULL;
    ListNode *rest,*t;
    t = Front;
    for(int i=1;i<s;i++)
    {
        rest= new ListNode;
        rest->data=arr[i];
        rest->next=NULL;
        t->next=rest;
        t=rest;
    }
}

void LinkedListMystery1(ListNode*& Front)
{
    ListNode * curr= Front;
    while(curr!=NULL)
    {
        if(curr->next!=NULL && curr->data>curr->next->data)
        {
            curr->data++;
            ListNode * temp = curr->next;
            curr->next=curr->next->next;
            temp->next=curr;
        }
        curr =curr->next;
    }
}

void display(ListNode *p)
{
    cout<<"front -> ";
    while(p)
    {
        cout<<" ["<<p->data<<" ] ";
        p=p->next;
        if(p)
        {
            cout<<"->";
        }
    }
    cout<<"/"<<endl;
}


int main()
{
    int arr[10]={10,20,40,30,90,80,70,60,100,0};
    create_Node(arr,10);
    LinkedListMystery1(Front);
    display(Front);

    return 0;
}
