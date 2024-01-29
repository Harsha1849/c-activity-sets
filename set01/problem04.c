#include<stdio.h>
int input()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void ouptut(int a, int b, int sum)
{
    printf("the sum of %d,%d is %d \n", a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}
