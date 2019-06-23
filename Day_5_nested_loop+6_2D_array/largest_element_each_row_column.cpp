#include <stdio.h> 
int main()
{
    int A[50][50];
    int row, col, sum = 0;
    int m,n;
    printf("Enter the size of the matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter elements in matrix : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<m; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[row][col];
        }
        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    for(row=0; row<m; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[col][row];
        }
        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }
    return 0;
}
