#include<iostream>
using namespace std;
int main()
{
    int c=0,i,n;

    for(i=1000;i>0;i--)
    {
        cout<<i<<"\t";
        c=c+1;
        if (c%5==0)
        {
            cout<<"\n";
        }
    }
}
