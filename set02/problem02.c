#include<stdio.h>
int input_side()
{
    int side;
    printf("enter side of triangle:");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c)
{
    return(a!=b && a!=c && b!=c);
}
void output(int isscalene, int a, int b, int c)
{
    if(isscalene)
    {
        printf("the sides %d,%d and %d is scalene",a,b,c);
    }
    else
    {
        printf("the sides %d, %d and %d is not scalene",a,b,c);
    }
}
int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(isscalene,a,b,c);
    return 0;
}