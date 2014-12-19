/*

  Assume you have a method isSubstring which checks if one word is a
  substring of another. Given two strings, s1 and s2, write code to check
  if s2 is a rotation of s1 using only one call to isSubstring. e.g.
  "waterbottle" is a rotation of "erbottlewat".
 
 */

# include <stdlib.h>
# include <string.h>


int areRotations (char str1[], char str2[]) {

  int len = strlen(str1);
  char *doubleStr2;
  int yup;

  if (len != strlen(str2)) return 0;

  doubleStr2 = malloc(2*len + 1);

  memcpy(doubleStr2, str2, len);
  memcpy(doubleStr2 + len, str2, len);
  doubleStr2[2*len] = '\0';

  yup = (strstr(doubleStr2, str1) != NULL);
  free(doubleStr2);

  return yup;
}
