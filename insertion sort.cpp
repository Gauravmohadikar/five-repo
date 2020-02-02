#include<iostream>
#include<math.h>
using namespace std ;

void insertionsort(int arr[],int n)
{
    int key,j ;
    for(int i=1; i<n; i++)
    {
        key = arr[i] ;
        j = i-1 ;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j] ;
            j = j-1 ;
        }
        arr[j+1] = key ;
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ' ;
}

int main()
{
    int array[] ={3,2,6,7,4,5,9,4,8} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    insertionsort(array,n) ;
    cout<<"sorted array is: " ;
    display(array,n) ;
    return 0 ;
    
}