#include<stdio.h>
void power();
void main()
{
	power();
}
void power()
{
	int base,exp,c;
	printf("enter the values of base and exp");
	scanf("%d%d",&base,&exp);
	c=1;
	while(exp>0)
	{
		c=c*base;
		exp--;
	}
	printf("%d",c);
}
