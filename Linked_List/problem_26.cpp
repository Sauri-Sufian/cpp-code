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

void partitionSort( ListNode** head)
{
     ListNode* previous = *head;
     ListNode* current = (*head)->next;
    while (current != NULL)
    {
        if (current->data < previous->data)
        {
            previous->next = current->next;
            current->next = *head;
            *head = current;
            current = previous;
        }
        else
        {
            previous = current;
        }
        current = current->next;
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
            cout<<",";
        }
    }
    cout<<"/"<<endl;
}

int main()
{
    int arr[15]={0, 0, -3, 3, -5, 7, -9, -10, 10, -11, -11, 11, -11, 12, -15};
    create_Front(Front,arr,15);
    partitionSort(&Front);
    display(Front);
}


