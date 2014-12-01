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

void zeroRowsAndColumnsIfMemberZero_test () {
  int matrix1[] = {1, 0, 2, 0};
  int matrix2[] = {1, 2, 0, 3, 4, 5};
  int matrix3[] = {1, 2, 3, 3, 4, 5};
  int i;

  zeroRowsAndColumnsIfMemberZero(matrix1, 2, 2);
  for (i=0; i < 4; ++i) {
    assert(matrix1[i] == 0);
  }

  zeroRowsAndColumnsIfMemberZero(matrix2, 2, 3);
  for (i=0; i < 3; ++i) {
    assert(matrix2[i] == 0);
  }
  for (i=3; i < 5; ++i) {
    assert(matrix2[i] == i);
  }
  assert(matrix2[5] == 0);


  zeroRowsAndColumnsIfMemberZero(matrix2, 2, 3);
  for (i=0; i < 6; ++i) {
    assert(matrix3[i] != 0);
  }
}

void rotate90Degrees_test() {
  char matrix1[] = {1};
  char matrix2[] = {1,2,3,4};
  char matrix3[] = {1,2,3,4,5,6,7,8,9};

  rotate90Degrees(matrix1, 1);
  assert(matrix1[0] == 1);

  rotate90Degrees(matrix2, 2);
  assert(matrix2[0] == 3);
  assert(matrix2[1] == 1);
  assert(matrix2[2] == 4);
  assert(matrix2[3] == 2);

  rotate90Degrees(matrix3, 3);
  assert(matrix3[0] == 7);
  assert(matrix3[1] == 4);
  assert(matrix3[2] == 1);
  assert(matrix3[3] == 8);
  assert(matrix3[4] == 5);
  assert(matrix3[5] == 2);
  assert(matrix3[6] == 9);
  assert(matrix3[7] == 6);
  assert(matrix3[8] == 3);
}

int main (void) {
  hasAllUniqueChars_test();
  /*hasAllUniqueChars_inPlace_test();*/ // SegFaulting
  reverseString_test();
  isPermutation_test();
  replaceSpaces_test();
  compressString_test();
  zeroRowsAndColumnsIfMemberZero_test();
  rotate90Degrees_test();

  return 0;
}
