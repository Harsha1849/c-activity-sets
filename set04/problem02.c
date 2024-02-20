#include<stdio.h>
typedef struct {
    int num,den;
} Fraction;

void input(Fraction *frac1, Fraction *frac2, Fraction *frac3);
Fraction find_smallest(Fraction frac1, Fraction frac2, Fraction frac3);
void output(Fraction smallest);

int main()
{
    Fraction frac1, frac2, frac3, smallest;
    input(&frac1,&frac2,&frac3);
    smallest = find_smallest(frac1,frac2,frac3);
    output(smallest);
    return 0;
}

void input(Fraction *frac1, Fraction *frac2, Fraction *frac3)
{
    printf("enter first fraction:");
    scanf("%d %d",&(frac1->num),&(frac1->den));
    printf("enter second fraction:");
    scanf("%d %d",&(frac2->num),&(frac2->den));
    printf("enter third fraction:");
    scanf("%d %d",&(frac3->num),&(frac3->den));
}

Fraction find_smallest(Fraction frac1, Fraction frac2, Fraction frac3)
{
    double value1=(double)frac1.num/frac1.den;
    double value2=(double)frac2.num/frac2.den;
    double value3=(double)frac3.num/frac3.den;
    if(value1 <= value2 && value1 <= value3)
    return frac1;
    else if (value2 <= value1 && value2 <= value3)
    return frac2;
    else
    return frac3;
}

void output(Fraction smallest)
{
    printf("the smallest fraction is: %d/%d\n",smallest.num, smallest.den);
}