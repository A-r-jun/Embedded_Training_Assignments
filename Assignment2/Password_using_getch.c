/* Program to take input as a password but should display only "*" instead of characters */

#include<stdio.h>
#include<conio.h>
int main()
{

	char password[11] = { 0 }, i = 0, n = 0 ;

	printf("Enter Password : ");
	while (i<10)      // loop to fill buffer 
	{
		password[i] = _getch(); // getch() was not working , so had to use _getch or _getwch 
		
    		if (password[i] != '\r')// first i was checking for \n , but after debugging find out that pressing Enter key passes \r
		{
			printf("*");
		}
		else
		{
			break;                      // breaking the loop if enter is pressed
		}
		
		i++;

	} 	

	printf("\n\nEntered Password is :");
	for (;n < i;n++)            // loop to show the entered password
		printf("%c", password[n]);

		return 0;
}
