#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<stdlib.h>
#include<time.h>
int main()
{
	int ret = 0, i;
	srand((unsigned int)time(NULL));//srand函数里要用unsigned int类型time函数返回值本质为long，
	                               // time函数里要用指针类型，NULL为空指针。
	
	for (i = 0; i < 100; i++)
	{
		ret = rand();
		printf("%d\n", ret);
	}
	return 0;
}