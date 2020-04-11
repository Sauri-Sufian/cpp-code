#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;
void create_Node(int arr[],int n)
{
    Node *p,*last;
    first=new Node;
    first->data=arr[0];
    first->next=0;
    last=first;

    for(int i=1;i<n;i++)
    {
        p=new Node;
        p->data=arr[i];
        p->next=0;
        last->next=p;
        last=p;
    }

}
int sum(Node *p)
{
    int sum1=0;
    while(p!=0){
       sum1+=p->data;
       p=p->next;
    }
    return sum1;
}

int maxi(Node *p)
{
    int maxx=p->data;
    while(p!=0)
    {
        if(p->data>maxx)
            maxx=p->data;

        p=p->next;
    }
    return maxx;

}
void improve_Linear_Search(Node *p,int target)
{
    Node *tail=0;
    while(p)// this ==if( p!=0) or p!=NULL
    {
        if(target==p->data)
        {
            tail->next=p->next;
            p->next=first;
            first=p;

            break;
        }
        tail=p;
        p=p->next;
    }

}

void node_Insert(Node *p,Node *q,int place)
{
    if(place==0)
    {
        q->next=first;
        first=q;
    }
    else {
        for(int i=0;i<place-1;i++)
        {
            p=p->next;
        }
        q->next=p->next;
        p->next=q;
    }
}
void display(Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void create_By_Insert(int place,int value)
{
    Node *last=0;
    if(first==NULL)
    {
        first=new Node;
        first->data=value;
        first->next=0;
        //cout<<"Test 1"<<endl;
       // cout<<first->data<<" "<<first->next;
        last=first;
    }
    else
    {
        Node *p;
         p=new Node;
    p->data=value;
    p->next=0;

    last=first;
    if(place==0)
    {
        //cout<<"Test 2->1"<<endl;
        p->next=first;
        first=p;
        last=p->next;
    }
    else
    {
        //cout<<"Test 2->2"<<endl;
        for(int i=0;i<place-1;i++)
        {
            last=last->next;
        }
        p->next=last->next;
        last->next=p;

    }
    }
}

void sorted_Insert(int value)
{
   Node *p,*q=NULL,*new_Node;
   p=first;
   while(p&&p->data<value)
   {
       q=p;
        p=p->next;

   }
   new_Node=new Node;
   new_Node->data=value;
   new_Node->next=q->next;
   q->next=new_Node;


}
void delete_Node(int place)
{
    Node *p=first;
    Node *q=p->next;
    if(place==0)
    {
        first=first->next;
        delete p;
    }
    else
    {
    for(int i=0;i<place-1;i++)
    {
        p=p->next;
        q=p->next;
        //cout<<p->data<<" "<<q->data<<endl;
    }
    p->next=q->next;
    delete p;

    }
}
bool check_Sort(Node *p)
{
    //p=first;
    while(p!=0)
    {
        if(p->next!=0&&p->data>p->next->data)
        {
           cout<<"Not Sorted "<<p->data<<endl;
           return false;
        }
        p=p->next;

    }
    cout<<"sorted "<<endl;
    return true;
}
void delete_double(Node *p)
{
    Node *q=p->next;
    while(q!=0&&p!=0)
    {
        if(p->data==q->data)
        {
           // cout<<q->data<<" ";
           p->next=q->next;
           delete q;
        }
        p=p->next;
        q=p->next;

    }

}

int main()
{
   int arr[12]={1,2,3,4,4,5,6,7,8,8,9,10};
    create_Node(arr,12);
   /* sum(first);
   maxi(first);
   int target;
   //cin>>target;
   improve_Linear_Search(first,target);

    Node *q;
    q=new Node;
   cin>> q->data;
    q->next=0;
    int place;
    cin>>place;
   node_Insert(first,q,place);*/


   int place,value;
   /*for(int i=0;i<5;i++)
    {
        place=i;
   cin>>value;
   create_By_Insert(place,value);
   }
   create_By_Insert(2,0);
*/

//cin>>place;
//sorted_Insert(value);
    //delete_Node(place);
   // check_Sort(first);
   delete_double(first);

    display(first);

    return 0;
}
