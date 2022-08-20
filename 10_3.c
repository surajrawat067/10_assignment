#include<stdio.h>
int even();
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
printf("%d\n",even(a));
    return 0;
}
int even(a)
{
if(a%2==0)
return 1;
else
return 0;

}