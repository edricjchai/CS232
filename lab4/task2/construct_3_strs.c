#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    char * value; //must use dynamic allocation
    struct node* next;
} node_t;

node_t * construct_3_strs() {
    //code here
    node_t * x;
    node_t * first;
    node_t * second;

    x = malloc(sizeof(node_t));
    first = malloc(sizeof(node_t));
    second = malloc(sizeof(node_t));

    x->value = "CS232";
    first->value = "is";
    second->value = "awesome";;

    x->next = first;
    first->next = second;
    second->next = x;

    first = x;
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);

}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
