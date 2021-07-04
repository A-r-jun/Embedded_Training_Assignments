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
	printf("No of set bits are %d\n", count);

	return 0;
}     

#if 0
Test case 1:
Enter the Number :
10
No of set bits are 2

Test case 2:
Enter the Number :
-1
No of set bits are 32
#endif
	
