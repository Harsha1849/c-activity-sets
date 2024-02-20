#include<stdio.h>
int input_degree();
void input_coefficients(int n, float a[]);
float input_x();
float evaluate_polynomial(int n, float a[], float x);
void output(int n, float a[], float x, float result);

int main()
{
    int n;
    float x, result;
    n=input_degree();
    float coefficients[n];
    input_coefficients(n, coefficients);
    x=input_x();
    result=evaluate_polynomial(n, coefficients,x);
    output(n, coefficients, x, result);
    return 0;
}

int input_degree()
{
    int degree;
    printf("enter degree of polynomial:");
    scanf("%d",&degree);
    return degree;
}

void input_coefficients(int n, float a[])
{
    printf("enter coefficients of polynomial(highest to lowest):\n");
    for(int i=0;i<=n;i++)
    {
        printf("coefficients of x^%d:",n-i);
        scanf("%f",&a[i]);
    }
}

float input_x()
{
    float x;
    printf("enter value of x:");
    scanf("%f",&x);
}

float evaluate_polynomial(int n, float a[],float x)
{
    float result = a[0];
    for(int i=1;i<=n;++i)
    {
        result=result*x+a[i];
    }
    return result;
}

void output(int n, float a[],float x, float result)
{
    printf("polynomial:");
    for(int i=0;i<=n;++i)
    {
        if(i<n)
        printf("%.2fx^%d +",a[i],n-i);
        else
        printf("%.2f",a[i]);
    }
    printf("evaluated at x= %.2f is: %.2f\n",x,result);
}