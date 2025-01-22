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