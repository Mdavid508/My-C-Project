#include<stdio.h> 
int main() {
    int dob;
    int currentD=2021;
    printf("input your date of birth?:");
    scanf("%d\n",&dob);
    int Age=(currentD-dob);
    printf("%d\n",Age);
    return 0;
}
