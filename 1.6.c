void rotate90Degrees(char matrix[], int n) {
  
  char temp1, temp2;
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
      temp1 = *rC;
      *rC   = *tR;

      temp2 = *bR;
      *bR   = temp1;

      temp1 = *lC;
      *lC   = temp2;

      *tR   = temp1;

      ++tR;
      rC += n;
      --bR;
      lC -= n;
    }
  } 
}

