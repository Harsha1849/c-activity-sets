#include<stdio.h>
#include<math.h>

typedef struct point{
    float x,y;
} Point;

typedef struct line{
    Point p1,p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main() {
    Line line;
    line=input_line();
    find_length(&line);
    output(line);
    return 0;
}

Point input_point(){
    Point p;
    printf("enter x coordinate:");
    scanf("%f",&p.x);
    printf("enter y coordinate:");
    scanf("%f",&p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("enter coordinates of point 1:\n");
    l.p1=input_point();
    printf("enter coordinates of point 2:\n");
    l.p2=input_point();
    return l;
}

void find_length(Line *l) {
    float dx=l->p2.x - l->p1.x;
    float dy=l->p2.y - l->p1.y;
    l->distance=sqrt(dx * dx + dy * dy);
}

void output(Line l){
    printf("length of line bw (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",
    l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}