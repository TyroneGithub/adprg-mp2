#include <stdio.h>
#include <stdlib.h>

struct Set{
    int data;
    int isSet;
    struct Set* next;
};

struct Set create(){
	printf ("Created new node!\n");
    struct Set *set = malloc(sizeof(struct Set));
    set->next = NULL;
    set->isSet = 0;
    printf("RILEYUYLOL5\n");
    return *set;
}

struct Set add(struct Set* s, int e){
    printf("Inside add!\n");
    if (!(s->isSet)) { // if node is empty
        s->data = e;
        s->isSet = 1;
       // printf("%d", s->data);
    } else { 
        // if node has data
    	printf("New node!\n");
        *(s->next) = create();
    	printf("New nodesssss!\n");
        add((s->next), e);
    }
    
}


struct Set unionSet(struct Set* s1, struct Set* s2){


}

/*
void print(Set s){
    Set *temp = s;
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
*/

void printList(struct Set *start) {
    struct Set *temp = start; 
    printf("\n"); 

    while (temp!=NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
} 

int main(){
    
    struct Set s1, s2, s3;

    s1 = create(); // []
    s2 = create();
    s3 = create();
    printf("Hello worldxXXXX\n");
    
    add(&s1, 1); // [1]
    add(&s1, 2);

//	printf("Hello worldx");
    
    printList(&s1);

//	printf("Hello world");

    return 0; 
}
