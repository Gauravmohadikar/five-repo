#include<iostream>
using namespace std ;

int recursivebubble(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
        {    
            swap(& arr[i], & arr[i+1]);
        }
    }
    recursivebubble(arr, n-1) ;
}

int display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" " ;
        
}

int main()
{
    int array[] = {5,6,3,7,8,2,1,9,4,6} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    
    recursivebubble(array,n) ;
    
    cout<<"sorted array is: ";
    
    display(array,n) ;
    
    return 0 ;
}