#include<stdio.h>
int area();
int main()
{
int r;
    printf("enter the radius");
    scanf("%d",&r);
    printf("%f",area (r));
}
int area(r)
{
    int c;
    c=3.14*r*r;
    return c;
}