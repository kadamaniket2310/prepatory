#include<stdio.h>
int main()
{
    int num,i,mul;
    printf("Entre the number:\t");
    scanf("%d",&num);
    
    printf("table of num %d",num);
    for(i=0;i<=10;i++)
    {
        mul = num* i;
        printf("\n%d * %d = %d",num,i,mul);
    }
    return 0;
}
