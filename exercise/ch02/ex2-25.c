
#include <stdio.h>
#include <string.h>

/*WARNING:This is buggy code*/
float sum_elements(float a[],unsigned length){
	int i;
	float result = 0;

	/* c语言在处理运算时，
	 * 把（length-1）当成有符号数来处理了，它的值是4294967295,
	 * 所以a[i]访问了错误的内存地址，报错SIGSEGV*/
	/* 修改为i<length*/
	for(int i=0; i <= length-1; i++){
		result += a[i];
	}
	return result;
}

int main(void){
	float array[] = {1.0,2.0,3.0};
	float res = sum_elements(array,0);
	printf("res=%f\n",res);
	return 0;
}
