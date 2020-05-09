#include<iostream>
using namespace std;

int main()
{
    int i ,n ;
    int a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      b=a%10 ; // last digit
      c=a/10000; // first digit
      int k=b+c;
      cout<<"Sum = "<<k<<"\n";
      k=0;
    }
  return 0 ;
}



