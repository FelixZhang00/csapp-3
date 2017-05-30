#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/*Determine whether arguments can be added without overflow*/
int tadd_ok(int x, int y){
  int sum = x+y;
  int neg_over = x<0 && y<0 && sum >=0;  
  int pos_over = x>=0 && y>=0 && sum <0;
  return !neg_over && !pos_over;
}

/*Determine whether arguments can be subtracted withoutoverflow*/
int tsub_ok(int x, int y){
  if(y == INT_MIN && x<0){
    return 1;
  }else if(y == INT_MIN && x>0){
    return 0;
  }else{
    return tadd_ok(x,-y);  
  }
}


int main(int argc, char** argv){
  printf("INT_MAX=%d,INT_MIN=%d\n",INT_MAX,INT_MIN);
  int x = atoi(argv[1]); 
  int y = atoi(argv[2]); 

  int res = tsub_ok(x,y);
  printf("%d-(%d)=%d is ok?=%d,\n",x,y,(x-y),res);
  return 0;
}
