#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Wrapper to the malloc system call.
 * If malloc fails, sleep for 5 seconds, and then try again.
 * If malloc failed 10 times in a row, return NULL.
 */
void *sleepy_malloc(size_t s) {
  if(s==0) return NULL;
  void* result;
  for(int i =0;i<9;i++){
    result = malloc(s);
    if(result!=NULL) return result;
    sleep(5);
  }
  return malloc(s);
}
int main(int argc, char const *argv[]) {
void* res = sleepy_malloc(sizeof(int));
  return 0;
}
