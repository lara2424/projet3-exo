#include "stdio.h"
#include "string.h"
#include "stdlib.h"

struct node {
    struct node *next;
    int hash;
    int id;
    char name[20];
    char buffer[100];
    unsigned int timestamp;
    char acl;
    short flow;
    char *parent;
    void *fifo;
};

/* pair_filter
 * Make a copy of the linked list starting at head,
 * only taking the elements with an even index
 *
 * @head : head of a linked list, possibly NULL
 * @return: pointer to the filtered linked list, return NULL if error or if head == NULL
 */
struct node *pair_filter(struct node *head) {


  if(head==NULL)return NULL;

  struct node *curr = head;
  struct node *ret = curr;
  struct node *ncurr = ret;
  int i;
  for(i =1; curr->next != NULL;i++){
    curr = curr->next;
    struct node *n = (struct node*)malloc(sizeof(struct node));
      if(n == NULL) return NULL;
    memcpy(ncurr,curr,sizeof(struct node));
      if(curr->next == NULL) break;
    curr = curr->next;
    ncurr= ncurr->next;

  }
  return ret;
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
