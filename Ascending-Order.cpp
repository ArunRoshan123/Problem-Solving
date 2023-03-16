# Ascending-Order-
#include <iostream>
using namespace std;
int main()
{ 
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]<arr[j]) // Acending order 
            {
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Acending numbers ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
