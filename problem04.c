#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d",&n);
        printf("Case %d:",i);

        for(j=1; j<n; j++){
            if(n%j==0)
                printf(" %d",j);
        }
        printf(" %d\n",n);
    }
    return 0;
}
