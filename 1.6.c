void rotate90Degrees(char matrix[], int n) {
  
  char temp;
  char *tR, *rC, *bR, *lC, *done;
  int i;

  for(i=0; ; ++i) {
    tR = matrix + (n+1)*i;
    rC = matrix + (n-1)*(i+1);
    bR = matrix + (n+1)*(n-i-1);
    lC = matrix + (n-1)*(n-i);

    done = rC;
    if (tR >= done) break;

    while(tR != done) {
      temp = *rC;

      *rC = *tR;
      *tR = *lC;
      *lC = *bR;
      *bR = temp;

      ++tR;
      rC += n;
      --bR;
      lC -= n;
    }
  } 
}

