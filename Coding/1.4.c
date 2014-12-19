/*

Write a method to replace all spaces in a string with '%20'. You
may assume the string has sufficient space at the end of the string to
hold the additional characters, and that you are given the "true"
length of the string.

Example:
  Input:  "Mr John Smith    "
  Output: "Mr%20John%20Smith"
 
 */

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
