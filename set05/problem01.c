#include<stdio.h>
#include<math.h>
struct _point{
    float x;
    float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a,b;
    float distance;
    printf("enter coordinates of point A:\n");
    a=input();
    printf("enter coordinates of point B:\n");
    b=input();
    dist(a,b,&distance);
    output(a,b,distance); 
}

Point input(){
    Point p;
    printf("x-coordinate:");
    scanf("%f",&p.x);
    printf("y-coordinate:");
    scanf("%f",&p.y);
    return p;
}

void dist(Point a, Point b, float *res){
    *res=sqrt(pow(b.x-a.x,2) + pow(b.y - a.y,2));
}

void output(Point a, Point b, float res){
    printf("distance bw points A(%.2f,%.2f) and B(%.2f,%.2f) is: %.2f\n", a.x,a.y,b.x,b.y,res);
}