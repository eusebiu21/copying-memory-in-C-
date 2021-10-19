#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 4096
#define NODE_OFFSET 10 
typedef struct node {
    unsigned int isvalid: 1;
    unsigned int size : 15;
    struct node * next;


}node_t;
int main(){
node_t n = {.isvalid = 1 , .size = 255 , .next=NULL};
node_t *n2;//change struct to a pointer, use "->"
char buffer[BUFFER_SIZE];

memcpy(buffer+NODE_OFFSET,&n,sizeof(node_t)); 
n2 =(node_t*)(buffer + NODE_OFFSET); 
printf("n = %d , %d , %p" , n2->isvalid,n2->size,n2->next);

return 0;


}