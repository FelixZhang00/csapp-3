long lt_cnt = 0;
long ge_cnt = 0;

long gotodiff_se2(long x,long y){
  long result;
  if(x<y)
    goto L_True;
  ge_cnt++;
  result = x - y;
  goto L_Done;
L_True:
  lt_cnt++;
  result = y - x;
L_Done:
  return result;
}
