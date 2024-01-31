#include<stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float number, sqrt;
    number=input();
    sqrt=square_root(number);
    output(number,sqrt);
    return 0;
}
float input()
{
    float n;
    printf("enter a number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x=n;
    float y=1.0;
    float epsilon=0.00001;
    while(x-y > epsilon)
    {
        x=(x+y)/2;
        y=n/x;
    }
    return x;
}
void output(float n, float sqrroot)
{
    printf("square root of %.1f is %.1f",n,sqrroot);
}