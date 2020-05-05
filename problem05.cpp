#include<iostream>
using namespace std;

int main()
{
    int row,col,t,n;
    cin>>t;

    while(t--)
    {
    cin>>n;
    for(row=1; row<=n; row++)
    {
      for(col=1; col<=n; col++)
      {
        cout<<"*";
      }
      cout<<"\n";
    }
    if(t>0)
    cout<<"\n";
    }
    return 0;
}
