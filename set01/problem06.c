#include <stdio.h>

int input(int *a, int *b, int *c) 
{
    printf("Enter three numbers: ");
    return scanf("%d %d %d", a, b, c); 
}

void compare(int a, int b, int c, int *largest) 
{
    *largest = a; 
    if (*largest < b) 
    {
        *largest = b;
    }
    if (*largest < c)
    {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) 
{
    printf("The largest among %d, %d, and %d is %d\n", a, b, c, largest);
}

int main() 
{
    int num1, num2, num3, biggest;
    compare(num1, num2, num3, &biggest);
    output(num1, num2, num3, biggest);
    return 0;
}
