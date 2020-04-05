#include "queue.h"
#include<iostream>
using namespace std;


void create_Queue(Queue *q, int s)
{
   q->Size=s;
   q->head=q->tail=0;
   q->Q=new Node*[s+1];
}
void enqueue(Queue *q,Node *p)
{
    if((q->tail+1)%q->Size==q->head)
    {
        cout<<"Queue is full"<<endl;
    }
    else
        {
            q->tail=(q->tail+1)%q->Size;
            q->Q[q->tail]=p;
        }
}


Node* dequeue(Queue *p)
{
    Node *x=NULL;
    if(p->head==p->tail)
    {
        cout<<"Queue is empty "<<endl;
        return x;
    }
    else
    {
        p->head=(p->head+1)%p->Size;
        x=p->Q[p->head];
    }
    return x;
}

int is_Empty(Queue p)
{

    return p.head==p.tail;
}
