#include<stdio.h>
#include<string.h>

int main()
{
    int x,a,b,c;
    char d[101],e;
    scanf("%d",&x);
    while(x--)
    {
    scanf("%s",d);
    b=strlen(d);
    e=d[b-1];
    c=(int)e-48;
    if (c%2==0)
    {
        printf("even\n");
    }
    else
    {

        printf("odd\n");
    }

    }

}

