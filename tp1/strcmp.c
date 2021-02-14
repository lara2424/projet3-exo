#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int strcasecmp(const char *s1, const char *s2) {

int i,j,c;
  for (i = 0; s1[i] != '\0'; i++){
    c = s1[i];
    j= s2[i];
    if(c<97) c=c+32;
    if(j<97)j=j+32;
    if(c!=j) {
      if(c>j) return 1;
      if (c<j) return -1;
    }
  }
return 0;
}
