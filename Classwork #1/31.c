#include <stdio.h>
int main()
{
    int row,col,check=1;;
    printf("Input number of Rows of the matrix : ");
    scanf("%d",&row);
    printf("Input number of Columns for the matrix :");
    scanf("%d",&col);
    int Matrix[row][col];
    printf("Input elements in the first matrix : \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&Matrix[i][j]);
            if(i==j)
            {
                if(Matrix[i][j]!=1)
                {
                    check=0;
                }
            }
            else
            {
                if(Matrix[i][j]!=0)
                {
                    check=0;
                }
            }
        }
    }
    printf("The matrix is :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    if(check==1)
    {
        printf("The matrix is an identity matrix.");
    }
    
    return 0;
}