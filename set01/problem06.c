#include<stdio.h>
int input()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}
void compare(int a, int b, int c,int *largest)
{
    *largest=a;
    {
        if(b>*largest)
        {
            *largest=b;
        }
        if(c>*largest)
        {
            *largest=c;
        }
    }
}
void output(int a,int b,int c,int *largest)
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}