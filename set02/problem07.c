#include<stdio.h>

typedef struct _triangle{
    float base,altitude,area;
} Triangle;

Triangle input_text()
{
    Triangle t;
    printf("enter base of triangle:");
    scanf("%f",&t.base);
    printf("enter altitude of triangle:");
    scanf("%f",&t.altitude);
    return t;
}

void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}

void output(Triangle t)
{
    printf("the area of triangle is: %.2f",t.area);
}

int main()
{
    Triangle t=input_text();
    find_area(&t);
    output(t);
    return 0;
}