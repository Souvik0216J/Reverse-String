#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    puts(strrev(str));
    return 0;
}