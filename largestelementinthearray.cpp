#include <iostream>
using namespace std;

int largest(int arr[],int n)
{
    int i;
    int max= arr[0];

    for(i=0;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
    return max;

};
int main()
{
    int arr[]={23,54,4546,6686};
    int n= sizeof(arr)/sizeof(arr[0])
    cout<<("the largest element is :"<<largest(arr,n))<<endl;
    return 0;
    
}