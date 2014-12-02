# include <string.h>

int areRotations (char str1[], char str2[]) {

  int len = strlen(str1);
  char *c, *begin, *end;

  if (len != strlen(str2)) return 0;

  c = str1;
  begin = end = str2;
  while(end < str2+len) {
    if(*(c++) != *(++end)) {
      begin = end; 
      c = str1;
    }
  }

  if (strstr(str2, str1 + (end-begin)) != str2) {
    return 0;
  }
  else return 1;
}
