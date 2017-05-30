#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * find why the tadd_ok_fake if not right solution.
 * 阿贝尔群：表达式(x+y)-x求值得到y,
 * 无论加法是否溢出，而(x+y)-y总是会求值得到x
 */
int tadd_ok_fake(int x,int y){
  int sum = x+y;
  return (sum-x == y) && (sum-y == x);
}

/*The right solution*/
int tadd_ok(int x, int y){
  int sum = x+y;
  int neg_over = x<0 && y<0 && sum >=0;  
  int pos_over = x>=0 && y>=0 && sum <0;
  return !neg_over && !pos_over;
}



int main(void){

  for(int x = INT_MIN;x <= INT_MAX;x++){
    for(int y = INT_MIN;y<=INT_MIN;y++){
      int fake = tadd_ok_fake(x,y);
      int real = tadd_ok(x,y);
      if(fake != real){
	printf("%d+%d=%d,fake=%d,real=%d\n",x,y,(x+y),fake,real);
	return 0;
      }
    }
  }
  return 0;
}
