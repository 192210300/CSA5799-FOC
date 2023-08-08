#include<stdio.h>
int main()
{
	int i,f=1,number;
	printf("enter a number");
	scanf("%d",&number);
   for(i=1;i<=number;i++)
	 {
	 	f=f*i;
	 }
	 printf("factorial of %d is:%d",number,f);
	 	return 0;
}
