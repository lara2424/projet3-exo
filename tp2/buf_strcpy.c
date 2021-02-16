#include <stdio.h>
#include <stdlib.h>
# include <string.h>
char *buf_strcpy(const char *src) {

  if(src == NULL) return NULL;

  char* buff = malloc(sizeof(char)*(strlen(src)+1));

  if(buff==NULL) return NULL;
  
  for(int i =0; i <= strlen(src);i++){
    buff[i]=src[i];
  }

return buff;
}
int main(int argc, char const *argv[]) {
  printf("%s\n", buf_strcpy("coucou"));
  return 0;
}
