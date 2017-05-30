
#include <stdio.h>
#include <string.h>

/*Determine weather string s is longer than string t*/
/*WARING:This function is buggy*/
int strlonger(char *s, char *t){
  return strlen(s) - strlen(t) > 0;
}

int main(void){
  char* s = "abc";
  char* t = "defg";  
  int res = strlonger(s,t);
  printf("%s > %s =%d\n",s,t,res);
  return 0;
}
