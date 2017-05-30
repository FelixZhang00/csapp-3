
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*Determine whether arguments can be added without overflow*/
int uadd_ok(unsigned x, unsigned y){
  unsigned res = x + y;
  return (int)res >= (int)x; 
}
/*This solution from the book is not correct!*/
/*Determine whether arguments can be added without overflow*/
int uadd_ok2(unsigned x, unsigned y){
  unsigned sum = x + y;
  return sum >= x;
}

int main(int argc, char** argv){
  printf("INT_MAX=%d\n",INT_MAX);
  unsigned x = (unsigned)atoi(argv[1]); 
  unsigned y = (unsigned)atoi(argv[2]);

  int res = uadd_ok(x,y);
  printf("%d+%d=%d is ok?=%d,\n",x,y,(x+y),res);
  return 0;
}
