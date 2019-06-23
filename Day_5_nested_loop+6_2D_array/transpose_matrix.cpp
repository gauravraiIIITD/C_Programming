#include <stdio.h>
int main()
{
    int A[100][100]; 
    int B[100][100];  
    int row,col,m,n;
    printf("Enter the size of row and col :");
    scanf("%d %d",&m,&n);
    printf("Enter element of matrix");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            B[col][row] = A[row][col];
        }
    }
    printf("\nOriginal matrix: \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }
    printf("Transpose of matrix : \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            printf("%d ", A[col][row]);
        }

        printf("\n");
    }
    return 0;
}
