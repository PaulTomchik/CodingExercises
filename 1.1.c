# include <ctype.h>
# include <stdlib.h>
# include <string.h>


int hasAllUniqueChars(char *str) {

  char *tally = calloc(26 , sizeof(char));
  char c;
  int i;

  for (i=0; i < strlen(str); ++i) {
    c = toupper(str[i]);
    if (c >= 'A' && c <= 'Z') {
      if (++tally[c - 'A'] > 1) return 0;
    }
  }

  return 1;
}


int hasAllUniqueChars_inPlace(char *str) {
  
  int len = strlen(str);
  int i, j;
  char c1, c2;
  
  if (!len) return 0;

  /*for (i=0; i < len; ++i) {*/
    /*c1 = toupper(str[i]);*/
    /*str[i] = c1;*/
  /*}*/

  for (j=1; j < len; ++j) {
    c1 = str[j];
    i = j-1;
    while (i >= 0 && str[i] > c1) {
      str[i+1] = str[i];
      --i;
    }
    str[i+1] = c1;
  }

  for (i=1; i < len; ++i) {
    c2 = toupper(str[i]);
    if (c1 == c2) return 0; 

    c1 = c2;
  }

  return 1;
}
