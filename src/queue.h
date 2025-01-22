
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
