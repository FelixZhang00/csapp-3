
void cond(long a,long *p){
  if(p && a> *p){
    goto LL;
  }
  return;
LL:
  *p=a;
  return;
}
