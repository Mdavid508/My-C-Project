
#include<stdio.h>
int Area(int lenght,int width){
    int Thearea=lenght*width;
    return Thearea;
}
int square(int sides){
    int Area=sides*sides;
    return Area;
}

int main(){
    int answer=Area(6,6);
    int product=square(9);
    printf("The area of Rectangle is:%d\n",answer);
    printf("The area of Square is:%d\n",product);
    return 0;
}