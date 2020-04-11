#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
}*Front=NULL;


void create_Front(ListNode *&p)
{
    int x;
    cin>>x;
    if(x>-1){
    if(p==NULL)
    {
        p=new ListNode;
        p->data=x;
        p->next=NULL;
    }
    ListNode *t;
    t=p;
    while(1)
    {
        ListNode *r;
        r=new ListNode;
        cin>>r->data;
        if(r->data<0)
            break;
        else{
        r->next=NULL;
        t->next=r;
        t=r;
        }

    }
    }
    else
    {p=NULL;}
}

int isSorted(ListNode *q)
{
    ListNode *p=q;
    int x=1,y=1;
    while(p->next)
    {
        if(p->data>p->next->data)
        {
            x=-1;
            break;
        }
        p=p->next;
    }
    p=q;
    while(p->next)
    {
        if(p->data<p->next->data)
        {
            y=-1;
            break;
        }
        p=p->next;
    }
    if(x==1||y==1)
        return 1;
    else
        return -1;
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


void create_Node_Array(ListNode *f,int n)
{
    int sum=0;
    if(n!=0){

    ListNode **p,**r;
    p=new ListNode*[n];
    r=new ListNode*[n];
    for(int i1=0;i1<n;i1++)
        p[i1]=NULL;

    ListNode *q=f,*t,*q1;
int i=0,z=0;
    while(q){

            if(p[i]==NULL){
            p[i]=new ListNode;
            p[i]->data=q->data;
            p[i]->next=NULL;
            r[i]=p[i];
            //cout<<r[i]->data<<" <-";
            q=q->next;
            }
            else{
                    for(int j=0;j<n;j++)
                    {
                    t=new ListNode;
                    t->data=q->data;
                    t->next=NULL;
                    r[j]->next=t;
                    r[j]=t;
                    //cout<<q->data<<" ";
                    if(q->next)
                    q=q->next;
                    else{
                            z=-1;
                        break;
                    }

                    }

            }
        if(i<n-1)
        i++;
        if(z==-1)
            break;

    }

   for(int i=0;i<n;i++)
   {
       sum+=isSorted(p[i]);
   }
    }
   if(sum==n)
    cout<<"Sorted"<<endl;
   else
   {
       cout<<"Not Sorted"<<endl;
   }
}



int main()
{
    create_Front(Front);
    //display(Front);
    int n;
    cin>>n;
    create_Node_Array(Front,n);

}
