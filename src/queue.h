
#include "stdbool.h"
#include "stdlib.h"
typedef struct
{
    int *data;
    int capacity;
    int size;
    int front;
    int back; 

    /* data */
}Queue;

//Function headers
Queue initQueue(int cap);
bool isFull(Queue *q);
int enqueue(Queue* q, int num);
bool isEmpty(Queue *q);