#include<iostream>
#include<math.h>

using namespace std ;

int InterpolationSearch(int array[], int n, int x)
{
    int low = 0 ;
    int high = n-1 ;
    while(low <= high && x >= array[low] && x <= array[high]){
        if(low == high){
            if(array[low] == x)
                return x ;
            return -1 ;
        }
        
        int pos = low + (((high-low)/(array[high]-array[low])) * (x-array[low])) ;
        if(array[pos] == x)
            return pos ;
        if(array[pos] < x)
            low = pos + 1 ;
        else 
            high = pos - 1 ;
    }
}

int main()
{
    int array[] = {10,12,13,14,18,19,20,21,22,23,29,30,31,32,33,43,44,45,46} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    cout<<"array is: " ;
    for(int i=0; i<n; i++){
        cout<<array[i]<<", " ;
    }
    int x ;
    cout<<"\n enter the element to be searched: " ;
    cin>>x ;
    int index = InterpolationSearch(array,n,x) ;
    if(index == -1)
        cout<<"number not found" ;
    else
        cout<<"element is at index: "<<index ;
    
    return 0 ;
}