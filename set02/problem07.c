#include<stdio.h>

typedef struct _triangle
{
    float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("enter base of traingle:");
    scanf("%f",&t.base);
    printf("enter altitude of traingle:");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
    printf("area of triangle=%.2f square units\n",t.area);
}
int main()
{
    Triangle t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
