#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;

class Node
{
    public:
    Node* lchild;
    int data;
    Node *rchild;

};

class Queue
{
    public:
    int Size;
    int head;
    int tail;
    Node **Q;
};

void create_Queue(Queue *q, int s);
void enqueue(Queue *q,Node *p);
Node* dequeue(Queue *p);
int is_Empty(Queue p);


#endif // QUEUE_H
