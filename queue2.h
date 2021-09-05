// queue.h -- Queue2 的接口
#ifndef _QUEUE2_H_
#define _QUEUE2_H_
#include <stdbool.h>

//typedef int Item;
typedef struct item
{
	long arrive;
	int processtime;
}Item;

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node * next;	
} Node;

typedef struct queue
{
	Node * front;
	Node * rear;
	int items;
} Queue;

void InitializeQueue(Queue * pq);
bool QueueIsFull(const Queue * pq);
bool QueueIsEmpty(const Queue * pq);
int QueueItemCount(const Queue * pq);
bool EnQueue(Item item, Queue * pq);
bool DeQueue(Item * item, Queue * pq);
void EmptyTheQueue(Queue * pq);

#endif















