#include<iostream>
using namespace std;
struct Node
{
    Node *lchild;
    int data;
    int height;
    Node *rchild;
};//*root=NULL;

int height(Node *p)
{
    int x=0,y=0;
    if(p)
    {
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
    else
    {
        return 0;
    }
}


int balanceFactor(Node *p)
{
    int x,y;
    x=p &&p->lchild?p->lchild->height:0;
    y=p &&p->rchild?p->rchild->height:0;
    return x-y;
}

Node * LeftRotation(Node *p,Node *&p1)
{
    //cout<<"In LLrotation"<<endl;
    Node *pl=p->lchild;
    Node *plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=height(p);
    pl->height=height(pl);
   // cout<<p->height<<" "<<pl->height<<endl;
    if(p==p1)
    {
        p1=pl;
    }
   // cout<<p1->data<<endl;
    return pl;
}

Node * RightRotation(Node *p,Node *&p1)
{
    //cout<<"In RRrotation"<<endl;
    Node *pr=p->rchild;
    Node *prl=pr->lchild;
    pr->lchild=p;
    p->rchild=prl;
    p->height=height(p);
    pr->height=height(pr);
   // cout<<p->height<<" "<<pl->height<<endl;
    if(p==p1)
    {
        p1=pr;
    }
   // cout<<p1->data<<endl;
    return pr;
}

Node *LeftRightRotation(Node *p,Node *&p1)
{
     //cout<<"In LRrotation"<<endl;
    Node * pl=p->lchild;
    Node *plr=pl->rchild;
    p->lchild=plr->rchild;
    pl->rchild=plr->lchild;
    plr->lchild=pl;
    plr->rchild=p;
    p->height=height(p);
    plr->height=height(plr);
    if(p==p1)
    {
        p1=plr;
    }
    return plr;
}

Node *RightLeftRotation(Node *p,Node *&p1)
{
   // cout<<"In RLrotation"<<endl;
    Node * pr=p->rchild;
    Node *prl=pr->lchild;
    p->rchild=prl->lchild;
    pr->lchild=prl->rchild;
    prl->lchild=p;
    prl->rchild=pr;
     p->height=height(p);
    prl->height=height(prl);

    if(p==p1)
    {
        p1=prl;
    }
    return prl;
}


Node * Insert(Node* &p1,int key)
{
   Node *t,*p=p1;
    if(p1==NULL){
    t=new Node;
    t->data=key;
    t->height=1;
    t->lchild=t->rchild=NULL;
    //t->height=1;
    return t;
    }
    if(p->data>key)
    {
        p->lchild=Insert(p->lchild ,key);
    }
    else if(p->data<key)
    {
        p->rchild=Insert( p->rchild,key);
    }
    p->height=height(p);

    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1)
    {
        return LeftRotation(p,p1);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==-1)
    {
        return RightRotation(p,p1);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==1)
    {
        return RightLeftRotation(p,p1);
    }
    else if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1)
    {
    //cout<<balanceFactor(p)<<" "<<balanceFactor(p->lchild)<<" "<<balanceFactor(p->rchild)<<endl;
        return LeftRightRotation(p,p1);
    }

    return p;



}


void display(Node *p)
{
    if(p)
    {
        display(p->lchild);
        cout<<p->data<<" ";
        display(p->rchild);
    }
}



int main()
{
        Node *root=NULL;
    int n,arr[6];
    cout<<"How many nodes"<<endl;
    cin>>n;
    int key;
    cin>>key;
    root=Insert(root,key);

    for(int i=0;i<n;i++)
    {
        cin>>key;
        Insert(root,key);
    //cout<<"->"<<root->data<<"<-"<<endl;
    }
  //cout<< root->lchild->rchild->data<<endl;
    //display(root);


    return 0;
}
