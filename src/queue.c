#include "../src/queue.h"

//Function to initialise queue
 Queue initQueue(int cap){
    Queue q;
    q.capacity = cap;
    q.data = (int*)malloc(sizeof(int)*cap); //Allocting enough mempry for the size of the queue
    q.size = 0;
    q.front = 0;
    q.back = -1;
    return q;
 }