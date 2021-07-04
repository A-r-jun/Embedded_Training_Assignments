/* Print bits in the character without using bitwise operator */

#include<stdio.h>

union byte {
	struct {
		unsigned int bit0 : 1;
		unsigned int bit1 : 1;
		unsigned int bit2 : 1;
		unsigned int bit3 : 1;
		unsigned int bit4 : 1;
		unsigned int bit5 : 1;
		unsigned int bit6 : 1;
		unsigned int bit7 : 1;
	}bits;

	char c;
};

int main()
{
	byte b;
	int num = 0;
	printf("Enter Number: ");
	scanf_s("%d", &num);
	b.c = num;
	
	printf("bit0: %d\n", b.bits.bit0);
	printf("bit1: %d\n", b.bits.bit1);
	printf("bit2: %d\n", b.bits.bit2);
	printf("bit3: %d\n", b.bits.bit3);
	printf("bit4: %d\n", b.bits.bit4);
	printf("bit5: %d\n", b.bits.bit5);
	printf("bit6: %d\n", b.bits.bit6);
	printf("bit7: %d\n", b.bits.bit7);

	return 0;
}

#if 0
Test case 1:
Enter Number : 15
bit0 : 1
bit1 : 1
bit2 : 1
bit3 : 1
bit4 : 0
bit5 : 0
bit6 : 0
bit7 : 0

Test case 2:
	Enter Number : 255
		bit0 : 1
		bit1 : 1
		bit2 : 1
		bit3 : 1
		bit4 : 1
		bit5 : 1
		bit6 : 1
		bit7 : 1

#endif
