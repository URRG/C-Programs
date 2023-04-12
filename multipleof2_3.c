#include <stdio.h>

int main()
{
   int num;
	printf("Enter a number: ");
	scanf("%d",&num);
		if(num%2==0)
	{
		printf("%d is divisible by 2\n",num);
	}
 if (num%2!=0)
	{
		printf("%d is not divisible by 2\n",num);
	}
	if(num%3==0)
	{
		printf("%d is divisible by 3\n",num);
	}
	if(num%3!=0)
	{
		printf("%d is not divisible by 3\n",num);
	}
	return 0;
}
