#include<stdio.h>
#include<stdlib.h>
/*Here is the homework for the Week2-part1, how to destroy a SLL using recursive function*/

node *deleteR(node *head){
    if(head==NULL){
        return;
    }
    else{ deleteR(head ->next);
        free(head);
    }
    

}
