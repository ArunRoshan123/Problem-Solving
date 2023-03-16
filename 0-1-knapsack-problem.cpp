#include <iostream>
using namespace std;
int knapsack(int value[],int wt[],int n, int Wt) //wt weight of item, Wt weight of knapsack
{
    if(n==0 || Wt==0)
    {
        return 0;
    }
    if(wt[n-1]>Wt)
    {
        return knapsack(value,wt,n-1,Wt);
    }
    return max(knapsack(value,wt,n-1,Wt-wt[n-1])+value[n-1],knapsack(value,wt,n-1,Wt));
}
int main()
{
    int value[]={100,50,150};
    int wt[]={10,20,30};
    int Wt=50;
    cout<<knapsack(value,wt,3,Wt)<<endl;
    return 0;
}
