/*

  Determine if one string is a permutation of the other.

 */

# include <stdlib.h>
# include <ctype.h>
# include <string.h>

int isPermutation(char *strA, char *strB) {

  int *tally = calloc(26 , sizeof(int));
  int i;
  char c;

  for (i=0; i < strlen(strA); ++i) {
    c = toupper(strA[i]);
    if (c >= 'A' && c <= 'Z') {
      ++(tally[c - 'A']);
    }
  }

  for (i=0; i < strlen(strB); ++i) {
    c = toupper(strB[i]);
    if (c >= 'A' && c <= 'Z') {
      if (--tally[c - 'A'] < 0) {
        free(tally);
        return 0;
      }
    }
  }
  
  for (i=0; i < 26; ++i) {
    if (tally[i]) {
      free(tally);
      return 0;
    }
  }

  free(tally);
  return 1;
}
