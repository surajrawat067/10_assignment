#include<stdio.h>
int factorial ();
int combination ();
int main ()
{
    int a,n;
    printf("This is combination formula\n");
    printf("Enter the total number of object\n");
    scanf("%d",&a);
    printf("Enter the number of selected object\n");
    scanf("%d",&n);
    printf("%d",combination (a,n));

    return 0;
}
int factorial (n)
{
    int f;
    for(f=1 ; n>1; n--)
        f=f*n;
    return f;
}
int combination ( a, n)
{
    int c;
    c=factorial (a)/(factorial (n)*factorial (a-n));
    return c;
}