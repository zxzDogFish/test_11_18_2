#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<stdlib.h>
#include<time.h>
int main()
{
	int ret = 0, i;
	srand((unsigned int)time(NULL));//srand������Ҫ��unsigned int����time��������ֵ����Ϊlong��
	                               // time������Ҫ��ָ�����ͣ�NULLΪ��ָ�롣
	
	for (i = 0; i < 100; i++)
	{
		ret = rand();
		printf("%d\n", ret);
	}
	return 0;
}