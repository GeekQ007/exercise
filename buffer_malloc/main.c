#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"

int test()
{
    struct queue q;
    struct buffer b = {5,NULL};
	queue_init(&q, 5);
    printf("%d \n", q.length);
	printf("%d \n", q.front);
	printf("%d \n", q.back);
	for(int i = 0; i<6; i++) {
	    enqueue(&q, &b);
	    printf("%d \n", q.length);
		printf("%d \n", q.front);
		printf("%d \n", q.back);
		printf("%d \n", q.data->value);
	    dequeue(&q, &b);
		printf("%d \n", q.length);
		printf("%d \n", q.front);
		printf("%d \n", q.back);
		printf("%d \n", q.data->value);
	}
    queue_deinit(&q);
}

int main()
{
    test();
    return 0;
}