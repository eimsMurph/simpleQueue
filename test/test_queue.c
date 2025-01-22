#include "../src/queue.h"
#include "../unity/unity.h"

//Test 1
//Test if queue structure exists and has memory allocated to it 
void test_queue_exists_isFull(void){
    Queue q = initQueue(10);
    TEST_ASSERT_NOT_NULL(q.data);
}

//Test 2
//Test for isFull
//Should return false for queue not at capacity
//Test should fail while isFull function not implemetned. 
void test_isFull_false_when_not_full(void){
    Queue q = initQueue(3);
    TEST_ASSERT_FALSE(isFull(&q));

}

//Test 3
//Test for enqueue 
void test_enqueue(void){
    Queue q;
    //if queue isn't full, add 1 to queue
    if(!isFull(&q)){
        enqueue(&q, 1);
    }
    //check 1 is at first place in queue 
    TEST_ASSERT_EQUAL(1, q.data[0]);
}