#include<stdio.h>
struct student
{
    char name[20];
    int marks, rollno;
}s;
int main()
{   
    printf("\nentre the student name \t");
    fgets(s.name, sizeof(s.name),stdin);
    printf("\nentre the roll no\t");
    scanf("%d",&s.rollno); 
    printf("\nentre the marks\t");
    scanf("%d",&s.marks);

    printf("\nname of student::\t",s.name);
    printf("%s",s.name);
    printf("\nrollno of student::\t%d",s.rollno);
    printf("\nmarks of student::\t%d",s.marks); 
    return 0;
}