#include<stdio.h>
int main(){
    int currentdate=2021;
    int birthdate;//this is the date of birth of the target
    printf("Enter the date of birth:");//user is prompted to enter the date of birth
    scanf("%d\n",&birthdate);
    int age=currentdate-birthdate;//calculates the age
        printf("your age is:%d\n",age);
        
    return 0;
}

