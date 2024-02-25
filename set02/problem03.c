#include<stdio.h>
int input()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}

int is_composite(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}

void output(int result, int n)
{
    if(result)
    {
        printf("%d is composite.\n",n);
    }
    else
    {
        printf("%d is not composite",n);
    }
}

int main()
{
    int num=input();
    int is_composite_result=is_composite(num);
    output(num,is_composite_result);
    return 0;
}