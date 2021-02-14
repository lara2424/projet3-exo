#include <stdio.h>
#include <stdlib.h>

#include <string.h>
/*
* @return: returns true (1) if str is a palindrome, -1 if str is NULL, otherwise false (0).
*/
/*
int pal(char *str) {
if(str== NULL) return -1;
int ptr = strlen(str)-1;
//printf("%d\n",ptr );
int i=0;
if(ptr<2 ) return -1;
while (ptr > i){

if(str[i]==32)i++;
int  c= str[i];
 if(str[ptr]==32|| str[ptr]==46)ptr--;
 if(str[i]<97){
//   printf("ici maj %d\n",str[i]);
   c = str[i]+32;
  // printf("devient min %d\n", c );
 }
//  printf("%d,%d\n",str[i],str[ptr]);
  if(c!=str[ptr]) {
//printf("%d, %d\n",c,str[ptr]);
//printf("%d, %d\n",i,ptr);
    return 0;}
  i++;
  ptr--;
//  printf("%d,%d\n", ptr, i );
}
return 1;
} */
int pal(char *str){
if(str== NULL) return -1;


  /*j'enlève les espaces*/

  char nouveau[strlen(str)];
  int j=0;
  for(int i=0; i<strlen(str);i++){
      if(str[i]!=' '&& str[i]!='.'){
          nouveau[j]=str[i];
          j++;
      }
      printf("nv  %s\n",nouveau );
  }
  printf("nv final  %s\n",nouveau );
  /*je crée un mot qui est le même mot que 'nouveau' mais à l'envers*/
  char foo[strlen(nouveau)];

  int fin = strlen(nouveau)-1;
  for(int i=0; i<strlen(nouveau); i++){
      foo[i]=nouveau[fin];
      fin --;
  }
  printf("foo  %s\n",foo);

  /*je compare les mots*/
  if(strncmp(foo,nouveau,strlen(foo))==0){
      return 1;
  }
      return 0;
    }

int main(int argc, char const *argv[]) {
  int c=pal(NULL);
  printf("NULL : %d\n",c);
  int d=pal("couuoc couuoc");
  printf("1 : %d\n",d);
  int e=pal("Engage le jeu que je le gagne.");
  printf("1 : %d\n",e);
  int f = pal("kayak");
  printf("1 : %d\n",f );
  return 0;
}
