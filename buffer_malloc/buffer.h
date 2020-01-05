#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef __BUFFER__
#define __BUFFER__
struct buffer
{
	int value;
	void *addr;
};

struct queue
{
	struct buffer *data;
	void *mem_base_addr;
	int front;
	int back;
	int length;
};

bool isqueue_full(struct queue *q);

bool isqueue_empty(struct queue *q);

void dequeue(struct queue *q, struct buffer *buf);

void enqueue(struct queue *q, struct buffer *buf);

void queue_init(struct queue *q, int length);

void queue_deinit(struct queue *q);

#endif
