#include<stdio.h>
int main()
{
    int i ,n ;
    int a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a);
      b=a%10 ; // last digit
      c=a/10000; // first digit
      int k=b+c;
      printf("Sum = %d\n",k);
      k=0;
    }
  return 0 ;
}



