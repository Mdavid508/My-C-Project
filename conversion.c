#include<stdio.h>
int sum(int num1, int num2){
    int Additions=num1+num2;//this is the add function part
    return Additions;
}
int main(){
    int decNumber;
    printf("Enter your decimal number:");
    scanf("%d\n" ,&decNumber);//prompts the user to enter the decimal number to be converted
   int Sum=sum(52,26);//*this is the sum of the numbers*//
    printf("Your hexadecimal number is:%X\n",decNumber);//converts decimal to hexadecimal
    printf("The final sum is:%d\n",Sum); 
    return 0;
}