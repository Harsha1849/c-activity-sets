#include<stdio.h>
#include<math.h>
#define PI 3.1415

struct camel{
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void find_weight_pointer(Camel *c);
void output(Camel c);

int main()
{
    Camel c=input();
    find_weight_pointer(&c);
    output(c);
    return 0;
}

Camel input()
{
   Camel c;
   printf("enter radius of stomach:");
   scanf("%f",&c.radius);
   printf("enter height of camel:");
   scanf("%f",&c.height);
   printf("enter length of camel:");
   scanf("%f",&c.length);
   return c;
}

float find_weight(Camel c)
{
    return PI * pow(c.radius,3)* sqrt(c.height * c.length);
}

void find_weight_pointer(Camel *c)
{
    c->weight = PI * pow(c->radius,3) * sqrt(c->height * c->length);
}

void output(Camel c)
{
    printf("weight of camel is: %.2f\n",c.weight);
}