#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>n;
        cout<<"Case "<<i<<":";

        for(j=1; j<n; j++){
            if(n%j==0)
                cout<<" "<<j;
        }
        cout<<" "<<n<<"\n";
    }
    return 0;
}
