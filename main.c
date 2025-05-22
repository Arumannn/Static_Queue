#include "header.h"
#include "boolean.h"
#include <stdio.h>
int main(){
    Queue MyQueue;
    int nilai, choice;
    boolean loop = false;
    initQueue(&MyQueue);
    while (!loop)
    {
        printf("1. Print\n");
        printf("2. Enqueue\n");
        printf("3. Dequeu\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Pilihanmu : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(&MyQueue);
            break;
        case 2:
            printf("Nilainya berapa : ");
            scanf("%d", &nilai);
            endQueue(&MyQueue, nilai);
            break;
        case 3:
            deQueue(&MyQueue, &nilai);
            break;
        case 4:
            nilai = peek(&MyQueue);
            printf("Nilai Peek : %d\n", nilai);
            break;
        case 5:
            loop = true;
            break;
        default:
            break;
        }
    }
    

}