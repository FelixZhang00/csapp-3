/*
 *对于类型int为32位的情况，设计一个版本的tmult_ok函数，
 *使用64位精度的数据类型int64_t，而不使用除法。
 */
#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int tmult_ok(int x, int y){
  //先将x转型为64表示的int
  uint64_t mul = (uint64_t)x*y;
  //检查mul down cast 成int后，是否被截断
  return (int)mul == mul;
}

int main(int argc, char** argv){
  printf("INT_MAX=%d,INT_MIN=%d\n",INT_MAX,INT_MIN);
  int x = atoi(argv[1]); 
  int y = atoi(argv[2]); 
  uint64_t mul = (uint64_t)x*y;
  int res = tmult_ok(x,y);
  printf("%d*%d=%" PRIu64 " is ok?=%d,\n",x,y,mul,res);
  return 0;
}
