/* Program with Macro to find even or odd using bitwise operator. */

#include<stdio.h>

#define EVEN_ODD(num) ( num & 1)

int main()
{
	int num;

	printf("Enter the Number :\n");
	scanf_s("%d", &num);

	EVEN_ODD(num) ? printf("Number is Odd") : printf("Number is Even");

	return 0;
}
#if 0

Test case 1:
Enter the Number :
10
Number is Even

Test case 2:
Enter the Number :
15
Number is Odd

#endif
