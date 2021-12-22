#include<stdio.h>
main()
{
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	if (cp>sp)
	{
		printf("loss=%d",cp-sp);
	}
	else 
	{
	 printf("gain");	
	} 
}
