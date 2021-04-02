#include<stdio.h>
void main()
{
    #define YEAR 2021
    int yob;
    printf("Please input your date of birth:");
    scanf("%d",&yob);
    int years=YEAR-yob;
    printf("\n your age is:%d", years);
}