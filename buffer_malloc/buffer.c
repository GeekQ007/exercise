#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "buffer.h"

bool isqueue_full(struct queue *q)
{
	return (((q->front + 1) % q->length) == q->back);
}

bool isqueue_empty(struct queue *q)
{
	return (q->back == q->front);
}

void dequeue(struct queue *q, struct buffer *buf)
{
	if (isqueue_empty(q))
	{
		printf("queue is empty.\n");
		return;
	}
	buf = &q->data[q->front];
	q->front = (q->front + 1) % (q->length);
}

void enqueue(struct queue *q, struct buffer *buf)
{
	if (isqueue_full(q))
	{
		printf("queue is full.\n");
		return;
	}
	q->data[q->back] = *buf;
	q->back = (q->back + 1) % (q->length);
}

void queue_init(struct queue *q, int length)
{
	q->data = (struct buffer *)malloc(length * sizeof(struct buffer));
	if (q->data == NULL) {
		printf("fail to malloc queue data.\n");
		return;
	}
	q->mem_base_addr = malloc(3264*2448*length);
	if (q->mem_base_addr == NULL) {
		printf("fail to malloc queue data.\n");
		return;
	}
	q->front = 0;
	q->back = 0;
	q->length = length;
}

void queue_deinit(struct queue *q)
{
	free(q->mem_base_addr);
}
