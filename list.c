/*Source: list.c 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

//Initializes the list with a length of zero and head value as null.
void initialize(int maxsize, List *L){
    L->length=0;
    L->head=NULL;
}

//Adds integers to the list as long as the size of the list has not exceeded 75 cause the maximum we should be adding 1-75 numbers for this game
void add(int val, List *L){
    if(L->length <76){
    node_t *current; node_t *temp;
    current = (node_t *) malloc(sizeof(node_t));
    temp =(node_t *) malloc(sizeof(node_t));    
    current->val = val;
    temp=L->head;
    if(L->head == NULL){
	L->head=current;L->length++;
    }
    else{
    while(temp->next !=NULL){
    temp=temp->next; 
    }
    temp->next=current; 
    L->length++;
    }}
}

//Checks if a value is present in the list to avoid duplicates
char check(int val, List L){
	node_t *current;int i;
	for(i=0, current=L.head; i<L.length; i++, current=current->next){
		if (current->val == val) {return 'F';}
	}
	return 'T';
}

//Prints from the list attaching character L/I/N/U/X according to the requirement file
void print(List L){
    int i;
    node_t *current;
    for (i=0,current=L.head; i<L.length; i++, current=current->next){
	for (int k=0; k<75; k++){
	if (current->val >= 1 && current->val <= 9){
                printf("L0%d ", current->val);
		break;
	}
        if (current->val >= 10 && current->val <= 15){
                printf("L%d ", current->val);
		break;
        }
        if (current->val >= 16 && current->val <= 30){
                printf("I%d ", current->val);
		break;
        }
        if (current->val >= 31 && current->val <= 45){
                printf("N%d ", current->val);
		break;
        }
        if (current->val >= 46 && current->val <= 60){
                printf("U%d ", current->val);
		break;
        }
        if (current->val >= 61 && current->val <= 75){
		printf ("X%d ", current->val);
                break;
        }
	}
    }
}
