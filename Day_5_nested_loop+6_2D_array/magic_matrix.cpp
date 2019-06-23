#include <stdio.h>
#define SIZE 3 
int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;
    printf("Enter elements in matrix : \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[row][col];
        }
        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[col][row];
        }
        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }
    return 0;
}
