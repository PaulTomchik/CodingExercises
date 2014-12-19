/*
 
Implement a method to perform basic string compression using the
counts of repeated characters.
Example:
  Input:  "aabcccccaaa"
  Output: "a2b1c5a3"
If the "compressed" string would not become smaller than the original
string, your method should return the original string.
 
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void compressString(char *str) {
  
  int len = strlen(str);
  int i, n;
  char *compressed;
  char c, *cur;
 
  if (len < 3) return;

  compressed = malloc(len);

  c = *compressed = *str;
  cur = compressed;
  n = 1;
  for (i=1; i <= len; ++i) {
    if (str[i] != c) {
      *(cur++) = c;
      cur += snprintf(cur, (len - (cur - compressed)), "%d", n);
      if ((cur - compressed) >= len) {
        free(compressed);
        return;
      }
      n = 1;
    } 
    else {
      ++n; 
    }

    c = str[i];
  }
  *cur = '\0';

  strcpy(str, compressed);
  free(compressed);
}
