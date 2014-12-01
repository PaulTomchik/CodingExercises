# include <string.h>


void reverseString(char str[]) {
  
  char *a, *b;
  char temp;

  a = str;
  b = str + strlen(str) -1;

  while (a < b) { 
    temp = *a;
    *(a++) = *b;
    *(b--) = temp;
  }
}
