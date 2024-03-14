#include<stdio.h>
int main()
{
    int math,English,physics,chemistry,biology,sum;
    float per;
    printf("entre the marks of 5 subjects::");
    scanf("%d %d %d %d %d",&math,&English,&physics,&chemistry,&biology);
    sum= math + English + physics + chemistry + biology;
    printf("sum = %d",sum);
    per=(sum/7.5);
    printf("\npercentage of subjects is:: %f \n", per);
    if (per > 90)
    {
        printf("Grade Excellent");
    }
    else if(per <= 90 && per > 80)
    {
        printf("Grade A");
    }
    else if(per <= 80 && per > 70)
    {
        printf("Grade B");
    }
    else if(per <= 70 && per > 60)
    {
        printf("Grade C");
    }
    else if(per <= 60 && per > 50)
    {
        printf("Grade D");
    }
    else if(per <= 50 && per > 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("FAIL");
    }
    
    return 0;
}