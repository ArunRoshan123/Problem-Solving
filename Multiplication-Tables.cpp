# Multiplication Tables
#include <iostream>

using namespace std;

int main()
{
    int n,j,i;
    cout<<"enter which table u want: ";
    cin>>n;
    cout<<"Table till which number: ";
    cin>>j;
    for(i=1;i<=j; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;  
    }

    return 0;
}
