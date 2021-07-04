/*Program to count set bits */

#include<stdio.h>

int main()
{
	int num , count = 0;;

	printf("Enter the Number :\n");
	scanf("%d", &num);
	
	for(int i=31;i>=0;i--)
	{
		num&1<<i ?count++:count;
	}
	printf("%d\n", count);

	return 0;
}      
