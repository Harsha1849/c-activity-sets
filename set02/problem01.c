#include<stdio.h>

void input_area(float *height,float *base)
{
    printf("enter height of triangle:");
    scanf("%f",height);
    printf("enter base of triangle:");
    scanf("%f",base);
}

void find_area(float height, float base, float *area)
{
    *area=0.5*height*base;
}

void output(float base, float height, float area)
{
    printf("the area of triangle of base %.2f and height %.2f is %.2f.\n", base,height,area);
}

int main()
{
    float base,height,area;

    input_area(&height,&base);
    find_area(base,height,&area);
    output(base,height,area);
    return(area);
}