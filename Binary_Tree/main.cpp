#include <iostream>
#include "queue.h"

using namespace std;

Node *root =NULL;

void create_Tree()
{
    Node* p,*t;
    Queue q;
    int x;
    create_Queue(&q,10);
    cout<<"Enter root value"<<endl;
    root = new Node;
    cin>>root->data;
    root->lchild=root->rchild=0;
    enqueue(&q,root);
    while(!is_Empty(q))
    {
        p=dequeue(&q);
        cout<<"Enter left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t= new Node;
            t->lchild=t->rchild=NULL;
            t->data=x;
            p->lchild=t;
            enqueue(&q,t);
        }

        cout<<"Enter right child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t= new Node;
            t->lchild=t->rchild=NULL;
            t->data=x;
            p->rchild=t;
            enqueue(&q,t);
        }
    }

}

void preorder(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}


void inorder(Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

void postorder(Node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}


int counter(Node *p)
{
    int x=0,y=0;
    if(p)
    {
        x=counter(p->lchild);
        x=counter(p->rchild);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
}

Node * binarySearchTree(Node *p,int key)
{
    Node *r=NULL;
        Node *t;
    if(p==NULL)
    {
        t=new Node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }

     if(key<p->data)
    {

        p->lchild=binarySearchTree(p->lchild,key);
    }
    else if(key>p->data)
    {
       p->rchild= binarySearchTree(p->rchild,key);
    }
    return p;

}



int main()
{
    //create_Tree();
   // preorder(root);
    //cout<<counter(root)<<endl;
    int key;
    cin >> key;
    root =binarySearchTree(root,key);
    cin >> key;
    binarySearchTree(root,key);
    cin >> key;
    binarySearchTree(root,key);
    preorder(root);
}
