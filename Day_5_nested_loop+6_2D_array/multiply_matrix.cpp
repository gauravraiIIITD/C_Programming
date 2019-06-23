#include <stdio.h> 
int main()
{
    int A[50][50];  
    int B[50][50]; 
    int C[50][50]; 
    int row, col, i, sum;
    int m,n;
    printf("Enter the size of the matrix");
    scanf("%d %d",&m,&n);
    printf("Enter elements in matrix A : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            sum = 0;
            for(i=0; i<m; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }
    printf("\nProduct of matrix :\n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    return 0;
}
