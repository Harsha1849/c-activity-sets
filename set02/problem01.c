#include<stdio.h>

void input(float *base,float *height)
{
    printf("enter the base of traingle:");
    scanf("%f", base);
    printf("enter the height of traingle:");
    scanf("%f", height);
}
void find_area(float base, float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("the area of triangle with base %.2f and height %.2f is %.2f\n",base,height,area);
}
int main()
{
    float base,height,area;

    input(&base,&height);
    find_area(base, height, &area);
    output(base, height, area);

    return 0;
}