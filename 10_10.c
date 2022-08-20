#include<stdio.h>
void prime (int a);
void prime (int a)
{
    while(a>0)
    {
        if(a%2==0)
        {
            a=a/2;
            printf("2\n");
        }
        else if(a%3==0)
        {   a=a/3;
            printf("3\n");
        }
        else if(a%5==0)
        {   a=a/5;
            printf("5\n");

        }


    }

}
int main()
{
    int a;
    printf("prime factor");
    scanf("%d",&a);
    prime (a);
    return 0;
}
    