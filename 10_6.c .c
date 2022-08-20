#include<stdio.h>
int factorial ();
int main()
{
    int a, b,c;
    printf("Enter the factorial");
    scanf("%d",&b);
    printf("%d",factorial (b,a));
    return 0;
}
int  factorial (b,a)
{  
 for(a=1 ; b>1; b--)
    {
        a=a*b;
    }
    return a;
}