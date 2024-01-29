#include<stdio.h>
int input()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}
int compare(int a, int b, int c)
{
    int largest=a;
    {
        if(b>largest);
        {
            largest=b;
        }
        if(c>largest);
        {
            largest=c;
        }
        return largest;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("the largest among %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
