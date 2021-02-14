#include <stdio.h>
#include <stdlib.h>

struct fract_t {
        int num;
        int denum;
};

void swap(int *i, int *j) {
  int swap = *j;
  *j=*i;
  *i=swap;
  printf("i %ls, j %ls\n",i,j );
}
void swapfr(struct fract_t *a, struct fract_t *b){
  struct fract_t swap = *a;
*b=*a;
*a=swap;
printf("%char_t* et %char_t* \n", a,b );
}
int main(int argc, char const *argv[]) {
int i = 2;
int* j =i;
int n = 3;
int*m = n;

struct fract_t a =  {10,2};
struct fract_t b =  {100,20};
struct fract_t *r = a;
struct fract_t *s = b;

  swapfr(r,s);
  return 0;
}
