#include<iostream>
#include<sstream>
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





string toString (ListNode *p)
{
    if(p==NULL)
    {
        string z="{}";
                return z;
    }
    else{
    string x="{",y;
    while(p)
    {
        stringstream q;
        q<<p->data;
        q>>y;
        x+=y;
        if(p->next)
        x+=",";
        p=p->next;
    }
    x+="}";
    return x;
    }
}

int main()
{
    int arr[3]={10,20,30};
    create_Front(Front,arr,3);
    cout<<toString(Front)<<endl;
}

