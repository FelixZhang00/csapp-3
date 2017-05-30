
#include <stdio.h>
#include <string.h>

/*Determine weather string s is longer than string t*/
/*WARING:This function is buggy*/
int strlonger(char *s, char *t){
  /* 当strlen(s) 比 strlen(t)小时，得到负数，
   * 因为与0比较大小， 
   * 然后又被转换为一个非常大的无符号数
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
