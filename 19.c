#include<stdio.h>
int main()
{
    int i,j,k,arr1[10][10],arr[10][10],add[10][10],row,col,row1,col1;
    printf("Enter row & col of first matrix: ");
    scanf("%d %d",&row,&col);
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)

        {
            printf("enter the element of first matrix: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("value of row1 and col1: ");
    scanf("%d %d",&row1,&col1);
        
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("enter the element of 2nd matrix: ");
            scanf("%d",&arr1[i][j]);
        }
    }

    if ((row==row1) && (col==col1))
    {
        printf("addition possible");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                add[i][j]=arr[i][j]+arr1[i][j];
            }
        }
    }
    else
    {
        printf("not possible");
        goto func;
    
    }
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col1;j++)
        {
            printf("%d ",add[i][j]);
        }
    }


func:

return 0;

}