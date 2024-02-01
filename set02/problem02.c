#include<stdio.h>
int input_side()
{
    int side;
    printf("enter a side of traingle:");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c)
{
    return(a !=b && a != c && b != c);
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene)
    {
        printf("the traingle with sides %d,%d and %d is scalene.\n",a,b,c);
    }
    else
    {
        printf("the traingle with sides %d, %d and %d is not scalene.\n",a,b,c);
    }
}

int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}