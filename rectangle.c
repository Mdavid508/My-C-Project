#include<stdio.h>  
int main()  
{   // initialize the local variables.  
    int l, b, ar, pr;  
    printf("Enter the length and width of the rectangle:");  
    scanf("%d %d",&l ,&b); // take input from the user  
    ar = l * b; // calculate the area of rectangle.  
    pr = 2 * (l + b); // calculate the perimeter of rectangle.  
    printf("Area of Rectangle is: %d\n", ar);    
    printf("Perimeter of Rectangle is: %d", pr);    
}   
 