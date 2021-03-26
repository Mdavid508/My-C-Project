#include<stdio.h>
int main(){
    int y=10;
    static int w=-9;
    w=w+1;
    y=y+1;
    printf("%d,%d",w,y);
    
}