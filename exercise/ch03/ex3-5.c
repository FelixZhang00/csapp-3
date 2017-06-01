
//虽然能完成同样的功能，但是反汇编后的代码与原题不符
void decode2(long *xp,long *yp,long *zp){
  long temp = *zp;
  *zp = *yp;
  *yp = *xp;
  *xp = temp;
}

void decode1(long *xp,long *yp,long *zp){
  long x = *xp;
  long y = *yp;
  long z = *zp;

  *yp = x;
  *zp = y;
  *xp = z;
}
