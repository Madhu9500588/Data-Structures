#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];

    cout<<"Enter the Size of the array:";
    cin>>n;

    cout<<"Enter the numbers in the array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        int temp= arr[i];
        int j=i-1;
        

        
            while(j>=0 && arr[j]>temp)
            {
             arr[j+1] = arr[j];
             j=j-1;
            }
        arr[j+1]=temp;
    }

    
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}