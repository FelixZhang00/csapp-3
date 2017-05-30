#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


/*Determine whether arguments can be added without overflow*/
int tadd_ok(int x, int y){
  if(x < (int)0 && y < (int)0){
    return (x+y) < (int)0;
  }else if(x > (int)0 && y > (int)0){
    return (x+y) > (int)0;
  }else{
    return 1;
  }
}


int main(int argc, char** argv){
  printf("INT_MAX=%d,INT_MIN=%d\n",INT_MAX,INT_MIN);
  int x = atoi(argv[1]); 
  int y = atoi(argv[2]); 

  int res = tadd_ok(x,y);
  printf("%d+%d=%d is ok?=%d,\n",x,y,(x+y),res);
  return 0;
}
