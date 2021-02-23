#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>




int eq (int a , int b){

}

int lt(int a, int b){
  if(a<b){
    return 0;
  }
  return 1;
}

int ne(int a, int b){
  if(a==b){
    return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  /* code */
  if(strcmp(argv[2]), "-eq"==0){
    r= eq(atoi(argv[1]),atoi(argv[3]))
  }
  return 0;
}
