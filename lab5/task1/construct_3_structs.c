#include<stdio.h>
#include<stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t * setup() {
    node_t * head = malloc(sizeof(node_t));
    //TODO:head declared for you
    //Allocate three more pointers
    //head for the first Node, and temporary pointers node1, node2 and node3
    node_t * x = malloc(sizeof(node_t));;
    node_t * y = malloc(sizeof(node_t));;
    node_t * z = malloc(sizeof(node_t));;
    //Allocate three node pointees and store references to them in the three pointers
    //Dereference each pointer to store the appropriate number and string into the length
    strcpy(head->str, "");

    x->length = 5;
    strcpy(x->str, "hello");

    y->length = 5;
    strcpy(y->str, "there");

    z->length = 4;
    strcpy(z->str, "prof");
    //Dereference each pointer to access the .next field in its pointee,
    head->next = x;
    x->next = y;
    y->next = z;
    z->next = NULL;
    //and use pointer assignment to set the .next field to point to the appropriate Node.

   return head;
}

void teardown(node_t* t) {
    //TODO: free all dynamic memory you requested.
    //Please complete the prototype of teardown.
    //You are not allowed to use globals
    while(t!=NULL){
        node_t* next = t->next;
        free(t->str);
        free(t);
        t = next;
    }
}

//You can ignore the following code for testing
void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    dump_all(head);
    teardown(head/*what argument?*/);
    return 0;
}

void dump_all(node_t * head) {
    printf("head -> ");
    node_t * cur = head;
    while(cur != NULL) {
        printf("%s ", cur->str);
	cur = cur->next;
    }
    printf("\ndone\n ");
}
