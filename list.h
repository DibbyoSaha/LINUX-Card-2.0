/*Source: list.h
*/

//Defining the functions implemented in list.c
typedef struct node{
    int val;
    struct node * next;
} node_t;

typedef struct{
    int length;
    node_t *head;
} List;

void initialize(int size, List *L);
void add(int val, List *L);
char check(int val, List L);
int listElem(List L, int ind);
void print(List L);
