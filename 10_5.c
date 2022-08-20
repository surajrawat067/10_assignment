#include<stdio.h>
void odd();
int main ()
{
    int a;
    printf("Enter the total  odd number");
    scanf("%d",&a);
    odd (a);
    return 0;
}
void odd (a)
{
    int i;
    for(i=1; a>0; i=i+2,a--)
        printf("%d\n",i);

}