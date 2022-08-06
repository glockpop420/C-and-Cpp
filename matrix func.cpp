#include <stdio.h>
void Mat_Input(int Mat_1[][10], int Mat_2[][10], int First_row, int First_col, int Second_row, int Second_col);
void Mat_Mul(int Mat_1[][10], int Mat_2[][10], int multResult[][10], int First_row, int First_col, int Second_row, int Second_col);
void Mat_mul_result(int mult[][10], int First_row, int Second_col);

int main()
{
	int Mat_1[10][10], Mat_2[10][10], mult[10][10], First_row, First_col, Second_row, Second_col, i, j, k;

	printf("Enter rows and columns of matrix 1: ");
	scanf("%d %d", &First_row, &First_col);

	printf("Enter rows and columns of matrix 2: ");
	scanf("%d %d", &Second_row, &Second_col);

	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	while (First_col != Second_row)
	{
		printf("Error! column of first matrix not equal to row of second.\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &First_row, &First_col);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &Second_row, &Second_col);
	}

	// Function to take matrices data
        Mat_Input(Mat_1, Mat_2, First_row, First_col, Second_row, Second_col);

        // Function to multiply two matrices.
        Mat_Mul(Mat_1, Mat_2, mult, First_row, First_col, Second_row, Second_col);

        // Function to Mat_mul_result resultant matrix after multiplication.
        Mat_mul_result(mult, First_row, Second_col);

	return 0;
}

void Mat_Input(int Mat_1[][10], int Mat_2[][10], int First_row, int First_col, int Second_row, int Second_col)
{
	int i, j;
	printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < First_row; ++i)
	{
		for(j = 0; j < First_col; ++j)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &Mat_1[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < Second_row; ++i)
	{
		for(j = 0; j < Second_col; ++j)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			scanf("%d", &Mat_2[i][j]);
		}
	}
}

void Mat_Mul(int Mat_1[][10], int Mat_2[][10], int mult[][10], int First_row, int First_col, int Second_row, int Second_col)
{
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	for(i = 0; i < First_row; ++i)
	{
		for(j = 0; j < Second_col; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix Mat_1 and Mat_2 and storing in array mult.
	for(i = 0; i < First_row; ++i)
	{
		for(j = 0; j < Second_col; ++j)
		{
			for(k=0; k<First_col; ++k)
			{
				mult[i][j] += Mat_1[i][k] * Mat_2[k][j];
			}
		}
	}
}
void Mat_mul_result(int mult[][10], int First_row, int Second_col)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for(i = 0; i < First_row; ++i)
	{
		for(j = 0; j < Second_col; ++j)
		{
			printf("%d  ", mult[i][j]);
		if(j == Second_col - 1)
				printf("\n\n");
		}
	}
}
	


