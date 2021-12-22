#include<stdio.h>
main()
{
int costprice,sellingprice;
scanf("%d%d",&costprice,&sellingprice);
if (costprice>sellingprice)
{
	printf("loss");
}
else
{
	printf("gain");
}
}
