#include <stdio.h>
#include <math.h>


void input(float *x1, float *x2, float *y1, float *y2);
float distance(float x1, float x2, float y1, float y2, float *dist);
void output(float x1, float y1,float x2, float y2, float result);

int main()
{
    float *result;
    float a1, b1, a2, b2;
    input(&a1, &a2, &b1, &b2);

    float ans = distance(a1,a2,b1,b2, &result);

    output(a1,a2,b1,b2,ans);

    return 0;

}

void input(float *x1, float *x2, float *y1, float *y2)
{
    printf("Enter the x coordinates: ");
    scanf("%f %f", x1,x2);

    printf("Enter the y coordinates: ");
    scanf("%f %f",y1,y2);
}

float distance(float x1, float x2, float y1, float y2, float *dist)
{
    float x = pow((x2-x1),2);
    float y = pow((y2-y1),2);

    *dist = sqrt(x+y);

    return *dist;
}

void output(float x1, float y1,float x2, float y2, float result)
{
    printf("the distance between (%.2f, %.2f) and (%.2f, %.2f):\n",x1,y1,x2,y2);
    printf("The result: %.2f", result);
}