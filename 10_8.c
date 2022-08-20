#include<stdio.h>
int factorial ();
int permutation ();
int main ()
{
    int a,n;
    printf("This is permutation formula\n");
    printf("Enter the total number of object\n");
    scanf("%d",&a);
    printf("Enter the number of selected object\n");
    scanf("%d",&n);
    printf("%d",permutation (a,n));

    return 0;
}
int factorial (n)
{
    int f;
    for(f=1 ; n>1; n--)
        f=f*n;
    return f;
}
int permutation ( a, n)
{
    int c;
    c=factorial (a)/(factorial (a-n));
    return c;
}