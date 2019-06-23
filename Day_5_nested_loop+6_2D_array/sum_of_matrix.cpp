#include <stdio.h>
int main()
{
    int A[50][50]; 
    int B[50][50]; 
    int C[50][50]; 
     int m,n;
    int row, col;
    printf("Enter the size of the matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter elements in matrix A of size : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B of size : \n");
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
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    printf("\nSum of matrices : \n");
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
