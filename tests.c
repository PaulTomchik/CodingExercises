# include "stdio.h"
# include "string.h"
# include "ch1.h"
# include "assert.h"

void hasAllUniqueChars_test() {
  assert(hasAllUniqueChars("abc"));
  assert(!hasAllUniqueChars("aa"));
}

void hasAllUniqueChars_inPlace_test() {
  assert(hasAllUniqueChars_inPlace("abc"));
  assert(!hasAllUniqueChars_inPlace("aa"));
}

void reverseString_test() {
  char str1[] = "yo";
  char str2[] = "";

  reverseString(str1);
  reverseString(str2);

  assert(strcmp(str1, "oy") == 0);

  assert(strcmp(str2, "") == 0);
}

void isPermutation_test() {
  assert(isPermutation("cat", "tac")); 
  assert(!isPermutation("", "tac")); 
  assert(!isPermutation("cat", "dog")); 
}

void replaceSpaces_test() {
  char str1[] = "A B C\0   ";
  char str2[] = "ABC\0   ";

  replaceSpaces(str1, 9);
  replaceSpaces(str2, 3);

  assert(strcmp(str1, "A%20B%20C") == 0);
  assert(strcmp(str2, "ABC") == 0);
}

void compressString_test() {
  char str1[] = "aabbbcc";
  char str2[] = "abbbcc";
  char str3[] = "Mississippi";
  char str4[] = "ggggrrrreeatttt!";

  compressString(str1);
  compressString(str2);
  compressString(str3);
  compressString(str4);
   
  assert(strcmp(str1, "a2b3c2") == 0);
  assert(strcmp(str2, "abbbcc") == 0);
  assert(strcmp(str3, "Mississippi") == 0);
  assert(strcmp(str4, "g4r4e2a1t4!1") == 0);
}

int main (void) {
  hasAllUniqueChars_test();
  /*hasAllUniqueChars_inPlace_test();*/
  reverseString_test();
  isPermutation_test();
  replaceSpaces_test();
  compressString_test();

  return 0;
}
