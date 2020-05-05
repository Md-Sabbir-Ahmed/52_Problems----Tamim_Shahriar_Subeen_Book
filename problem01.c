#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    while (n!=0)
    {
       scanf("%d",&a);
       if (a%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
        n=n-1;
    }

}

