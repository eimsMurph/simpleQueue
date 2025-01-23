# simpleQueue
Simple FIFO queue in C using TDD

Plan: design a queue in C using TDD method, i.e. writing failing tests first, followed by implementations which make the test pass. Simple queue will need to have a data structure, initialise function, enqueue and dequeue functions as well as isFull and isEmpty helper functions. 

![FIFO Queue](https://github.com/user-attachments/assets/83c68fb5-4bb5-42fe-91b5-2a879b1ec143)

This queue structure holds integers. The capacity of the queue is set upon it's initialisation. Enqueue and dequeue functions add and remove elements as desribed in the diagram above. Functions return 0 when a number has successfukky been added or removed from the queue. Function isFull and compares the size of the queue to it's capacity. Function isEmpty compares the size of the queue to 0. 
