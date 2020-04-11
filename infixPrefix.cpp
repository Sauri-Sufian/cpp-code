#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int Size;
    int top;
    //char *Stack_p;
};

struct Node
{
    char data1;
    int data2;
    Node *next;
}*first=0;

void push(char c,int x,Stack *t)
{
    Node *q;
    q=new Node;
    q->data1=c;
    q->data2=x;
    q->next=0;
    if(first==0)
    {
        first=q;
       // p=first;
    }
    else
    {
        q->next=first;
        first=q;
    }
    t->top++;
}
char pop(Stack *t,Node *p)
{
    char x;
    x=first->data1;
    first=first->next;
    t->top--;
    delete p;
    return x;


}
void display(Node *p)
{
    while(p)
    {
        cout<<p->data1<<" "<<p->data2<<endl;
        p=p->next;
    }
}
int main()
{
    string in,po=""; int x;char c;
    Stack s;
    s.top=-1;
    cin>>in;
    for(int i=0;i<in.length();i++)
    {
        if(in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/')
        {
            if(in[i]=='+'||in[i]=='-') x=1;
            else x=2;
            while(s.top>-1&&x>=first->data2)
            {
                //cout<<first->data1<<" "<<first->data2<<endl;
                c=pop(&s,first);
                po+=c;
            }
            push(in[i],x,&s);
        }
        else
            po+=in[i];
        //cout<<po<<endl;

    }
    //cout<<s.top<<endl;
    for(int i=s.top;i>-1;i--)
    {
       c= pop(&s,first);
      // cout<<c<<" ";
        po+=c;
    }
//display(first);
cout<<po<<endl;
    return 0;
}
