#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void* calloc2(size_t nmemb, size_t size){
  if(nmemb==0|| size==0){
    return NULL;
  }
  int*ptr = malloc(nmemb*size);
  for(int i =0; i<nmemb*size;i++){
    ptr[i]=0;
  }
  return ptr;
}
int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
