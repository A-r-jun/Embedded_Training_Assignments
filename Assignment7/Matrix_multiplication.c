/*  Program to show matrix multiplication on 2D array */

#include<stdio.h>

int main()
{
	int row1 = 2, col1 = 2, row2 = 2, col2 = 2;

	printf("Enter the dimension of first matrix : Row * Col\n");
	scanf_s("%d %d", &row1, &col1);

	printf("Enter the dimension of second matrix : Row * Col\n");
	scanf_s("%d %d", &row2, &col2);

	if (col1 != row2)
	{
		printf("For matrix multiplication, column of first matrix needs to be equal to row of second matrix\n");
		return -1;
	}
	int row3 = row1, col3 = col2;
	int matrix1[row1][col1], matrix2[row2][col2], matrix3[row3][col3];
	int i, j, k;

	printf("Enter the element of First matrix row wise: \n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			scanf_s("%d", &matrix1[i][j]);
		}
	}

	printf("Enter the element of Second matrix row wise:\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			scanf_s("%d", &matrix2[i][j]);
		}
	}
	for (i = 0; i < row3; i++)
	{
		for (j = 0; j < col3; j++)
		{
			matrix3[i][j] = 0;
			for (k = 0; k < col1; k++)
			{
				matrix3[i][j] += (matrix1[i][k] * matrix2[k][j]);
			}
		}
	}

  printf("Matrix after multiplication :\n");
	for (i = 0; i < row3; i++)
	{
		for (j = 0; j < col3; j++)
		{
			printf("%d ", matrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#if 0
Test case 1:
 
Enter the dimension of first matrix : Row * Col
2 2
Enter the dimension of second matrix : Row * Col
2 2
Enter the element of first matrix row wise:
1 2 
3 4
Enter the mat2(2x2) row wise:
4 3 
2 1
Matrix after multiplication :
8 5
20 13
  
Test case 2:
Enter the dimension of first matrix : Row * Col
3 1
Enter the dimension of second matrix : Row * Col
1 3
Enter the element of First matrix row wise: 
1
2
3
Enter the element of Second matrix row wise:
1 2 3
Matrix after multiplication :
1 2 3 
2 4 6 
3 6 9 
  

#endif 
