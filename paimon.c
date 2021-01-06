#include <stdio.h>
#include <stdlib.h>

struct Set{
    int data;
    int isSet;
    struct Set* next;
};

/* function to swap data of two nodes a and b*/
void swap(struct Set* a, struct Set* b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 


void bubbleSort(struct Set* start) 
{ 
    int swapped, i; 
    struct Set* ptr1; 
    struct Set* lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 

struct Set* create (){
    struct Set* set = NULL;
    set = (struct Set*)malloc(sizeof(struct Set));
    
    set->next = NULL;
    set->isSet = 0;
    printf("SHIT CREATED\n");
    
    return set;
}

// struct Set* add(struct Set** s,int data){
//     if(!isSet){
//         s->data = data;    
//         s->isSet = 1;
        
//     }else{
//         newNode = 
//     }
// }

//

/* Given a node prev_node, insert a new node after the given  
prev_node */


struct Set* add(struct Set* prev_set, int new_data)  
{  
    // if (prev_set == NULL){  
    //     printf("the given previous node cannot be NULL");      
    //     return;  
    // }  

    if(!prev_set->isSet){
        struct Set* new_node = create();
        prev_set->data = new_data;
        prev_set->isSet = 1;
        prev_set->next = new_node;
    }else{
        /*
        5
        20
        25
        */

        // int temp = 0;

        // if(prev_set->data < new_data){
            
        // }


        add(prev_set->next, new_data);
    }

    // sort dito 

    bubbleSort(prev_set);
    return prev_set ;
 
}

struct Set* unionSet
  
void print (struct Set* set){
    if (set->isSet)
}

int main(){

    struct Set* s1,* s2,* s3;

    s1 = create();

    //s1->data = 5;
    add(s1, 5);
    printf("hello %d\n",add(s1, 25)->data);
    add(s1, 30);
    printf("hello %d\n",add(s1, 20)->data);
    // add(s1, 25);

    printf("%d\n", s1->data);
    printf("%d\n", s1->next->data);
    printf("%d\n", s1->next->next->data);
    printf("%d\n", s1->next->next->next->data);


//    s2 = create();
//    s3 = create();




    return 0;
}
