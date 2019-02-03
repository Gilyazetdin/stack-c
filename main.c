#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
	int i;
	int* data;
} Stack;

void stack(Stack* st, int size)
{
	st->data = (int*)malloc(size * sizeof(int));
	st->i = 0;
}

void push(Stack* st, int data)
{
	st->data[st->i++] = data;
}
int pop(Stack* st)
{
	return st->data[--st->i];
}

int main()
{
	Stack* st = (Stack*)malloc(sizeof(Stack*));
	stack(st, 100);
	push(st, 1000);
	printf("%d", pop(st));
	return 0;
}