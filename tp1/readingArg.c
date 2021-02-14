#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  for (int i = 0; i < argc; i++){
    if(i%2==1){
    printf(" ");
    printf("%s", argv[i] );
  }}
  printf("\n" );
  return 0;
}
