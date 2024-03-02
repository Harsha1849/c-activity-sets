#include<stdio.h>
#include<math.h>

typedef struct point {
    float x,y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
}Polygon;

int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
    Polygon poly;
    int n;
    n=input_n();
    poly.sides=n;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}

int input_n(){
    int n;
    printf("enter no of sides:");
    scanf("%d",&n);
    return n;
}

Point input_point(char *prompt_msg)
{
    Point p;
    printf("%s\n",prompt_msg);
    printf("enter x coordinate:");
    scanf("%f",&p.x);
    printf("enter y coordinate:");
    scanf("%f",&p.y);
    return p;
}

int input_polygon(Polygon *p)
{
    int i;
    for(i=0;i<p->sides;i++)
    {
        char prompt_msg[50];
        sprintf(prompt_msg,"enter coordinates for point %d:",i + 1);
        p->p[i]=input_point(prompt_msg);
    }
    return 0;
}

float find_distance(Point a, Point b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void find_perimeter(Polygon* p) {
    int i;
    p->perimeter=0;
    for(i=0;i<p->sides;i++){
        int next=(i+1)%p->sides;
        p->perimeter += find_distance(p->p[i],p->p[next]);
    }
}

void output(Polygon p) {
    printf("perimeter of polygon with %d sides is %.2f\n",p.sides,p.perimeter);
}