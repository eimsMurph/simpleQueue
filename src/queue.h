
typedef struct
{
    int *data;
    int capacity;
    int size;
    int front;
    int back; 

    /* data */
}Queue;

Queue initQueue(int cap);
