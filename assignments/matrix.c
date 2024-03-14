#include<stdio.h>
int main()
{
    int a[10][10],b[10][10], mul[10][10],r,c,j,k,i;
    printf("Entre the number of rows");
    scanf("%d",&r);
    printf("Entre the number of columns");
    scanf("%d",&c);
    printf("Entre the first matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entre second matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix  %d\n",a[i][j]);
    printf("second matrix %d\n",b[i][j]);
    printf("matri multiplication\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}