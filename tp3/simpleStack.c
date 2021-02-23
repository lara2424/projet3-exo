#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
* Remove the top element of the stack and return its content.
*
* @head : pointer to the top of the stack
* @result : pointer to store the popped element
*
* @return 0 if no error, 1 otherwise
*
* pre : @result contains a null-terminated correct string
* post : @result contains the string @name from the element at the top of the stack
*/

struct node {
  struct  node *next;
    char *name;
};

int pop(struct node **head, char *result){
  if(head==NULL||*head==NULL) return 1;

strncpy(result,(*head)->name, strlen((*head)->name)+1);
struct node *n = (*head)->next;
free((*head)->name);
free(*head);
*head = n;
return 0;
}

/**
* Add @name at the "top" of the stack.
*
* @head : pointer to the top of the stack
* @name : the string to be placed in the element at the top of the stack
*
* @return 0 if no error, 1 otherwise
*/

int push(struct node **head, const char *value){
  if (head ==NULL) return 1;
  struct node *n = (struct node *) malloc(sizeof(struct node));
  if(n == NULL) return 1;
  char* name = (char*) malloc(sizeof(char)*(strlen(value)+1));
  if(name==NULL){
    free(n);
    return 1;
  }
  n->next = *head;
  strncpy(name,value,strlen(value)+1);
  n->name=name;
  *head=n;
  return 0;

}
int main(int argc, char const *argv[]) {
  /* code */
  int t =0;
struct node *n;
n->next = NULL;
n->name = "1";
t++;
char value = '2';
push(&n,&value);
t++;
struct node *curr = n;
for(int i =0; i<t;i++){
printf("%s \n",curr->name);
curr = curr->next;
}
  return 0;
}
