#include<stdio.h>
int digit (int a,int b)
{
    int i;
    i=a;
    if (a==b)
        return 1;
           while(a>0)
        {   a=i%10;
            if(a==b)
                return 1;
                a=i/10;
              if  (a==b)
                return 1;
            i=a;
        }
   return 0;
}
int main ()
{
    int a,b;
    printf("give a number and enter a digit");
    scanf("%d %d",&a,&b);
    printf("%d",digit (a,b));

    return 0;
}