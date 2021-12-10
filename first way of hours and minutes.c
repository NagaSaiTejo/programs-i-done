#include<stdio.h>
main()
{
	int result1,minutes,result;
	scanf("%d",&minutes);
	result=minutes/60;
	result1=minutes%60;
	printf("hours are :%d and  minutes:%d ",result,result1);
}
