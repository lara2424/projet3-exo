#include "stdio.h"
#include "stdint.h"

int cmp(uint8_t (*f1)(int),uint8_t(*f2) (int)){
int i;
if((*f1)==(*f2)) return 1;
for(int i=0; i<256;i++){
  if((*f1)(i)!=(*f2)(i)) return 0;
}
return 1;
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
