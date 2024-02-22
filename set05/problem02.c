#include<stdio.h>
#include<math.h>
#define PI 3.1415926

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
    float radius, height, length, weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius, height, length);
    output(radius,height,length,weight);
    return 0;
}

void input_camel_details(float *radius, float *height, float *lenght){
    printf("enter camel radius:");
    scanf("%f", radius);
    printf("enter camel height:");
    scanf("%f", height);
    printf("enter camel length:");
    scanf("%f",  lenght);
}

float find_weight(float radius, float height, float length)
{
    return PI * pow(radius,3) * sqrt(height*length);
}

void output(float radius, float height, float length, float weight)
{
    printf("stomach radius: %.2f\n", radius);
    printf("height: %.2f\n", height);
    printf("length: %.2f\n", length);
    printf("weight: %.2f\n", weight);
}