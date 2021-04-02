#include<stdio.h>
    int main(){
        int a;
        int b;
        int c;
        int d;
        printf(" please input the value of a,b,c,d:");
        scanf("%d %d %d %d",&a ,&b ,&c ,&d);
        int sum=a+b+c+d;
        int avg=sum/4;
        printf("The sum of four Numbers is:%d\n",sum);
        printf("The average marks scored by the student is:%d",avg);
        return 0;
    }