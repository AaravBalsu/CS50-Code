#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("x is ");
    float x = get_int();
    
    printf("y is ");
    float y = get_int();
    
    
    printf("%f plus %f is %f\n", x, y, x + y);
    printf("%f minus %f is %f\n", x, y, x - y);
    printf("%f times %f is %f\n", x, y, x*y);
    printf("%f divided by %f is %f\n", x, y, x/y);
}