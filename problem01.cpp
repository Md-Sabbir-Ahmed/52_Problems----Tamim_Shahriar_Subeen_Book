#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    while (n!=0)
    {
        cin>>a;
        if (a%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        n=n-1;
    }

}
