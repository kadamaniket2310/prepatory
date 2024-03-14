#include<stdio.h>
int main()
{
    char ch;
    printf("Entre any character");
    scanf("%c", &ch);
     if (ch >= 'A' && ch <= 'Z')
     {
         printf("character is uppercase");
     }
      else if(ch >= 'a' && ch <= 'z')
     {
         printf("character is lowercase");
     }
    else 
     {
         printf("it is digit and symbol");
     }
     return 0;
}