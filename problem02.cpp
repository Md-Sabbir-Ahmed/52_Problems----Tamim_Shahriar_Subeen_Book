#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int x,a,b,c;
    char d[100],e;
    cin>>x;
    while(x--)
    {
    cin>>d;
    b=strlen(d);
    e=d[b-1];
    c=(int)e-48;
    if (c%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {

        cout<<"odd"<<endl;
    }

    }

}
