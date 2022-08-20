#include<stdio.h>
void natural ();
int main ()
{
    int x;
    printf("n natural number");
    scanf("%d",&x);
    natural (x);
    return 0;
}
void natural (x)
{
    int i;
    for(i=1; x>0; i++,x--)
        printf("%d\n",i);
}