
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*Determine whether arguments can be added without overflow*/
int uadd_ok_fail(unsigned x, unsigned y){
  unsigned res = x + y;
  return (int)res >= (int)x; 
}
/*Determine whether arguments can be added without overflow*/
int uadd_ok(unsigned x, unsigned y){
  unsigned sum = x + y;
  return sum >= x;
}

int main(int argc, char** argv){
  printf("UINT_MAX=%u\n",UINT_MAX);
  unsigned x = (unsigned)atoi(argv[1]); 
  unsigned y = (unsigned)atoi(argv[2]);

  int res = uadd_ok(x,y);
  printf("%u+%u=%u is ok?=%u,\n",x,y,(x+y),res);
  return 0;
}
