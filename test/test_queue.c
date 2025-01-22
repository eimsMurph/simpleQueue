#include "../src/queue.h"
#include "../unity/unity.h"

//Test 1
//Test if queue structure exists and has memory allocated to it 
void test_queue_exists_isFull(void){
    Queue q = initQueue(10);
    TEST_ASSERT_NOT_NULL(q.data);
}