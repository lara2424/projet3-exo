#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
* Structure node
*
* @next: pointer to the next node in the list, NULL if last node_t
* @value: value stored in the node
*/
typedef struct node {
  struct node *next;
  int value;
} node_t;

/**
* Structure list
*
* @first: first node of the list, NULL if list is empty
* @size: number of nodes in the list
*/
typedef struct list {
  struct node *first;
  int size;
} list_t;

/*
* Create a new node containing the value @value.
*
* @value: value stored in the node
* @next : pointer to next node, initialised to NULL.
* @return: returns the pointer to the newly created node, or NULL if an error occured.
*/
node_t *init_node(int value) {
    node_t* n = malloc(sizeof(node_t));
    if(n==NULL) return NULL;
    n-> value = value;
    n-> next = NULL;
  return n;
}

/*
* Add a node at the head of the list @list and increment the number of nodes in the list (member `size`)
*
* @l: linked list
* @value: value to add to the list
*
* @return: 0 if success, 1 otherwise
*/
int add_node(list_t *list, int value) {
    if(list->first ==NULL) {
      list->first = init_node(value);
      if (list -> first==NULL) return 1;
      list->size ++;
      return 0;
    }else {
      node_t *n = init_node(value);
      if (list -> first==NULL) return 1;
      n->next = list->first;
      list->first = n;
      return 0;
    }
    return 1;
}

int main(int argc, char const *argv[]) {
  /* code */
  list_t *l;
  add_node(l,5);
  add_node(l,6);
  printf("%s\n",*l);
  return 0;
}
