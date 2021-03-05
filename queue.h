#ifndef queue_h
#define queue_h

#include "node.h"

typedef struct{
  NodePtr headPtr, tailPtr;
  int size;
}Queue;

void enqueue(Queue *q, int x){
  NodePtr newNode = (NodePtr)malloc(sizeof(Node));
  newNode->data = x;
  newNode->nextPtr = NULL;
  if(q->headPtr != NULL){
    q->tailPtr->nextPtr = newNode;
  }
  else{
    q->headPtr = newNode;
  }
  q->tailPtr = newNode;
  q->size++;
}

int dequeue(Queue *q){
  int x;
  NodePtr temp;
  if(q->headPtr != NULL){
    temp = q->headPtr;
    if(q->headPtr->nextPtr == NULL){
      q->tailPtr = NULL;
    }
    q->headPtr = q->headPtr->nextPtr;
    x = t->data;
    free(t);
    q->size--;
    return x;
  }
}

#endif