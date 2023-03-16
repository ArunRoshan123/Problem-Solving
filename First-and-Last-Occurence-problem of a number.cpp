# First-and-Last-Occurence-problem
#include <iostream>
using namespace std;
int firstOccurence(int arr[],int n,int i, int key)
{
    if(i==n)
    {
        return -1; 
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstOccurence(arr, n, i+1, key);
}
int lastOccurence(int arr[],int n, int j, int key)
{
    if(j==0)
        return -1;
    if(arr[j]==key)
        return j;
    else
        return lastOccurence(arr, n, j-1, key);
}

int main()
{
    int n,key,i=0,j=0;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<firstOccurence(arr,n,i,key)<<endl;
    cout<<lastOccurence(arr,n,j,key);
    return 0;
}
