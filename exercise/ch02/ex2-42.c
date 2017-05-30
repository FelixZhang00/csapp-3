#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int div16(int x){
  //x为负数时，bias=0xf;x为正时，bias=0
  int bias = x>>31 & 0xf; 
  return (x+bias)>>4;
}

int main(int argc, char** argv){
  int x = atoi(argv[1]); 
  int res =div16(x);
  printf("%d/16=%d,real=%d,fail=%d\n",x,res,x/16,x>>4);
  return 0;
}
