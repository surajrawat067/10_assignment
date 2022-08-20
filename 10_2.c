#include<stdio.h>
int si();
int main ()
{
    int principal, rate, time;
    printf("enter the value of pricipal, rate ,time");
    scanf("%d %d %d",&principal, &rate, &time);
    printf("%d",si(principal, rate, time));
    return 0;
}
int si( principal, rate, time)
{
    float c;
    c=principal*rate*time*0.01;
    return c;

}