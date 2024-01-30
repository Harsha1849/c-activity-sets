#include <stdio.h>

void input(int *a, int *b) 
{
   printf("Enter two numbers: ");
   scanf("%d %d", a, b);
}

void add(int a, int b, int *sum) 
{
   *sum = a + b;
}

void output(int a, int b, int sum) 
{
   printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main() 
{
   int num1, num2, result;

   input(&num1, &num2);  
   add(num1, num2, &result); 
   output(num1, num2, result);  

   return 0;
}