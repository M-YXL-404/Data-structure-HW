#include<stdio.h>
#include<stdlib.h>
/*Here is the homework for the Week2A, how to find the numver of nodes on a SLL*/


void printlist(node *head,){
    int counter = 0;
    node * temp = head;
    while (temp != NULL)
    {
       printf("%d -", temp->data);
       temp = temp->next;
       counter++;
    }
    printf("NULL \n");
    printf("the number of nodes are: %d", counter);
}
