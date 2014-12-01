# include <stdlib.h>
# include <string.h>

void zeroRowsAndColumnsIfMemberZero(int *matrix, int m, int n) {

  int *rowsToZero;
  int *colsToZero;
  int i, j;
  int intSize = sizeof(int);

  rowsToZero = calloc(sizeof(int) , (m/sizeof(int) + 1)); 
  colsToZero = calloc(sizeof(int) , (n/sizeof(int) + 1));

  for (i=0; i<m; ++i) {
    for (j=0; j<n; ++j) {
      if(!matrix[i*n + j]) {
        rowsToZero[i/intSize] |= 1 << (i % intSize);
        colsToZero[j/intSize] |= 1 << (j % intSize);
      }
    } 
  }
  
  for (i=0; i<m; ++i) {
    if(rowsToZero[i/intSize] & (1 << (i % intSize))) {
      memset(matrix + i*n, 0, n * intSize);
    }
  }

  for (j=0; j<n; ++j) {
    if(colsToZero[j/intSize] & (1 << (j % intSize))) {
      for (i=0; i<m; ++i) {
        matrix[i*n + j] = 0;
      }  
    }
  }

  free(rowsToZero);
  free(colsToZero);
}
