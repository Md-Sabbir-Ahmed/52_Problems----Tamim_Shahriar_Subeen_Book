#include<stdio.h>
int main()
{
    int row,col,t,n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
      for(col=1; col<=n; col++)
      {
        printf("*");
      }
      printf("\n");
    }
    if(t>0)
    printf("\n");
    }
    return 0;
}
