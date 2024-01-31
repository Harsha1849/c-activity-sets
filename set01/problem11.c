#include<stdio.h>
typedef struct _complex
{
    float real;
    float imaginary;
} Complex;

Complex input_complex()
{
    Complex c;
    printf("enter the real part:");
    scanf("%f",&c.real);
    printf("enter the imaginary part:");
    scanf("%f",&c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real + b.real;
    sum.imaginary=a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("sum is (%f,%fi)", sum.real,sum.imaginary);
}

int main()
{
    Complex num1=input_complex();
    Complex num2=input_complex();
    Complex result=add_complex(num1, num2);
    output(num1,num2,result);
    return 0;
}