#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    
    printf("%i plus %i is %i\n", x, y, x +y);
}