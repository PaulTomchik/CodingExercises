# include <string.h>
# include <stdio.h>

void replaceSpaces(char *str, int trueLen) {
  
  char *c1, *c2, c;

  c1 = str + strlen(str);
  c2 = (str + trueLen);
  
  while (c1 >= str) {
    c = *(c1--);
    if (c == ' ') {
      *(c2--) = '0';
      *(c2--) = '2';
      *(c2--) = '%';
    }
    else *(c2--) = c;
  }
}
