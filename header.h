#ifndef HEADER_H
#define HEADER_H
#define MAX 3
#include "boolean.h"
#define Front(Q) (Q)->Front 
#define Rear(Q) (Q)->Rear
#define Items(Q) (Q)->Items

typedef struct{
    int Front;
    int Items[MAX];
    int Rear;
}Queue;

void initQueue(Queue * Q);

boolean isEmpty(Queue * Q);

boolean isfull(Queue * Q);

void endQueue(Queue * Q, int X);

void deQueue(Queue * Q, int * X);

void display(Queue * Q);

int peek(Queue * Q);




#endif  