#include<iostream>
using namespace std ;

void swap(int *a,int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
void bubblesort(int array,int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]) ;
        }
    }
}

void display(int array, int n ){
    for(int i=0; i<n; i++)
        cout<<" "<<array[i] ;
}

int main()
{
    int array[]={5,4,2,1,8} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    bubblesort(array) ;
    cout<<"the sorted array is: " ;
    display(array,n) ;
    return 0 ;
}