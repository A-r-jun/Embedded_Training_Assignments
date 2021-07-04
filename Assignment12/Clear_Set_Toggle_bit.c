/* Program to CLEAR, SET, TOGGLE bit with bitwise operator and Macro */

#include<stdio.h>

#define CLEAR_BIT(num, BitPosition)  ( num = num & ~(1<<BitPosition)) 
#define SET_BIT(num, BitPosition)    ( num = num | 1<<BitPosition)
#define TOGGLE_BIT(num, BitPosition) ( num = num ^ 1<<BitPosition)

void DecToBin(int n)
{	
	for (int i = 31;i >= 0;i--)
	{
		n& (1 << i)? printf("1"):printf("0");
	}
	printf("\n");
}


int main()
{
	int num, pos;

	printf("Enter the Number :\n");
	scanf_s("%d", &num);
	printf("Enter the bit position :\n");
	scanf_s("%d", &pos);

	printf("Number in Binary : ");
	DecToBin(num);

	CLEAR_BIT(num, pos);
	printf("Number after clearing %d bit : ",pos);
	DecToBin(num);

	SET_BIT(num, pos);
	num = num | 1 << pos;
	printf("Number after setting %d bit : ", pos);
	DecToBin(num);

	TOGGLE_BIT(num, pos);
	printf("Number after toggling %d bit : ", pos);
	DecToBin(num);

	return 0;
}

#if 0
Test case 1:

	Enter the Number :
	-1
		Enter the bit position :
	4
		Number in Binary : 11111111111111111111111111111111
		Number after clearing 4 bit : 11111111111111111111111111101111
		Number after setting 4 bit : 11111111111111111111111111111111
		Number after toggling 4 bit : 11111111111111111111111111101111

Test case 2:
	Enter the Number :
	10
		Enter the bit position :
	3
		Number in Binary : 00000000000000000000000000001010
		Number after clearing 3 bit : 00000000000000000000000000000010
		Number after setting 3 bit : 00000000000000000000000000001010
		Number after toggling 3 bit : 00000000000000000000000000000010
#endif
