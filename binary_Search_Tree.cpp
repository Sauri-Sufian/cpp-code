#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node* rchild;
};

struct Stack
{
    int  top;
    int Size;
    Node *p;

};

Node * Insert(Node *p,int key)
{
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
        p->lchild=Insert(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=Insert(p->rchild,key);
    }
    return p;
}

int height(Node *p)
{
    int x=0,y=0;
    if(p){
    x=height(p->lchild);
    y=height(p->rchild);
    if(x>y)
        return x+1;
    else
        return y+1;
    }
    else
        return 0;
}

Node *Inpre(Node *p)
{
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p;
}

Node *Insuc(Node *p)
{
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p;
}



Node *Delete(Node *p1,int key)
{

    Node *q,*p=p1;
    if(p==NULL)
    {
        return NULL;
    }
    if(p->lchild==NULL&&p->rchild==NULL)
    {
        if(p==p1)
            p1==NULL;
        delete p;
        return NULL;
    }
    if(key<p->data)
    {
        p->lchild=Delete(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=Delete(p->rchild,key);
    }
    else
    {
        if(height(p->lchild)>height(p->rchild))
        {
             q= Inpre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }
        else
        {
           q= Insuc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }

    return p;

}

int * preOrder(Node *p)
{
    int *arr;
    static int i=0;
    arr = new int [100];
    if(p)
    {
        arr[i]=p->data;
        i++;
        //cout<<p->data<<" ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
    return arr;
}

void createStack(Stack *s)
{
    s->Size=100;
    s->p=new Node [s->Size];
    s->top=-1;
}


void push(Node *p,Stack *s)
{
    if(s->top>=s->Size)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        s->top++;
        p=&s->p[s->top];
    }
}

Node * pop(Stack *s)
{
    Node *p=NULL;
    if(s->top==-1)
    {
        cout<<"Stack is empty "<<endl;
        return NULL;
    }
    else
    {
        p=&s->p[s->top];
        s->top--;

    }
    return p;
}

Node * stkTop(Stack *s)
{
    if(s->top==-1)
        return NULL;
    return &s->p[s->top];
}



Node * createByTraversal(int *arr,int n )
{
    Stack stk;
    createStack(&stk);
    int i=0;

    Node *newRoot=NULL,*p,*t;
    newRoot=new Node ;
    newRoot->data=arr[i];i++;
    newRoot->lchild=newRoot->rchild=NULL;
    p=newRoot;
    while(i<n)
    {
        //cout<<i<<endl;
        if(arr[i]<p->data)
        {
            cout<<p->data<<" ";
            t=new Node;
            t->data=arr[i];i++;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            push(p,&stk);
            p=t;
            cout<<p->data<<" "<<endl;
            cout<<"Test 1"<<endl;
        }
        else
        {

            if(arr[i]>p->data&&arr[i]<stkTop(&stk)->data)
            {
                cout<<p->data<<" ";
                t= new Node;
                t->data=arr[i];i++;
                t->lchild=t->rchild=NULL;
                p->rchild=t;
                p=t;
                cout<<p->data<<" "<<endl;
            cout<<"Test 2.1"<<endl;

            }
            else{
                p=pop(&stk);
                cout<<p->data<<" "<<endl;
                cout<<"Test 3"<<endl;
            }
        }
    }
return newRoot;
}

void inorder (Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}






int main()
{
    /*Node *root=NULL;
    int key;
    cin>>key;

    root=Insert(root,key);
    for(int i=0;i<7;i++){
        cin>>key;
        Insert(root,key);
    }
        Insert(root,key);*/
       // cout<<height(root)<<endl;

       // Delete(root,30);
        int a[8]={30,20,10,15,25,40,50,45};
        //cout<<sizeof(a)<<endl;
       Node *x= createByTraversal(a,8);
        inorder(x);
    return 0;
}
