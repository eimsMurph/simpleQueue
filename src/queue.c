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

 //Function to check if queue is full

 bool isFull(Queue *q){
   return (q->size == q->capacity);
 }

 //Funtion to add number to queue

 int enqueue(Queue* q, int num){
   if(isFull(q)== true){
      return -1;
   } 
   q->data[q->back] = num;
   q->back++;
   q->size++;
   return 0;

 }

 //Function to check if queue is empty
  bool isEmpty(Queue *q){
   return (q->size == 0);
 }