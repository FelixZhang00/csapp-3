/*
 *  * 编译方法：
 *  gcc ex2-7.c ../../sample/ch02/show-bytes.c
 */

#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

extern void show_bytes(byte_pointer start, int len);

int main(void)
{
	const char *s = "abcdef";
	show_bytes((byte_pointer)s, strlen(s));

	return 0;
}
