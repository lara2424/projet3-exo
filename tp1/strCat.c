#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


//Write the body of the function strcat which concatenates the strings dest and src in the dest pointer !
// As the documentation says, you have to overwrite the '\0' character that terminates the dest string and then add a new '\0' at the end of the concatenated string.
// In this way, the src string will follow the dest string but the result will be considered as a unique entire string.
// You have to return the pointer to the resulting string dest.

char* strcat(char* dest, const char* src) {
  char* ptr = dest + strlen(dest);

    // Appends characters of source to the destination string
    while (*src != '\0')
        *ptr++ = *src++;

    // null terminate destination string
    *ptr = '\0';

    // destination is returned by standard strcat()
    return dest;
}
char* strcat2(char* dest, const char* src) {
int i, j;

    // move to the end of destination string
    for (i = 0; dest[i] != '\0'; i++);

    // i now points to terminating null character in destination

    // Appends characters of source to the destination string
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];

    // null terminate destination string
    dest[i + j] = '\0';

    // destination is returned by standard strcat()
    return dest;
}
int main(int argc, char const *argv[]) {
  strlen("blabla");
  printf("%ld\n", strlen("blabla"));
  return 0;
}
