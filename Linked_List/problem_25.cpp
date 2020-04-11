#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front=NULL;


void create_Front(ListNode *&p,int arr[],int s)
{
    if(s<=0)
    {
        p=NULL;
    }
    else{
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

}





int minimum (ListNode *p)
{
            string d="Empty string";
    try{
    if(p){
            int x=p->data;
    while(p)
    {
        if(p->data<x)
        {
            x=p->data;
        }
        p=p->next;
    }
    return x;
    }

    else
    {
      throw d;
    }
    }
    catch(string d)
    {
        cout<<d<<endl;
        return -999;
    }
}

int main()
{
    int arr[100]={10,2,3,4,-5,6,7,8,9,1};
    create_Front(Front,arr,10);
   cout<< minimum(Front)<<endl;

}

