# Armstrong-Number
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int num=n;
    while(n>0)
    {
        int lastdigit= n%10;
        sum=sum + pow(lastdigit,3);
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"armstrong number";
    }
    else
    cout<<"not armstrong";
    return 0;
}
