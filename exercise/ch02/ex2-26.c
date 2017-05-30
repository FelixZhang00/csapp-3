
#include <stdio.h>
#include <string.h>

/*Determine weather string s is longer than string t*/
/*WARING:This function is buggy*/
int strlonger(char *s, char *t){
  /*
   * strlen返回的是size_t,是无符号整数，相减为负数，
   * 但被当成一个很大的整数来处理。
   * 应该改为：return strlen(s) > strlen(t);
   */	
  return strlen(s) - strlen(t) > 0;
}

int main(void){
  char* s = "abc";
  char* t = "defg";  
  int res = strlonger(s,t);
  printf("%s > %s =%d\n",s,t,res);
  return 0;
}
