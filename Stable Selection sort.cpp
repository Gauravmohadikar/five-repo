#include<iostream>
using namespace std ;

//void swap(int *a,int *b)
//{
//    int temp = *a;
//    *a = *b ;
//    *b = temp ;
//}


// STABLE SELECTION SORT

void selectionSort(int array[],int n)
{
    int min;
    for(int i=0; i<n-1; i++){
        min=i ;
        for(int j=i+1; j<n; j++){
            if(array[j] < array[min])
                min = j ;
        }
        
        int key = array[min] ;
        while(min > i){
            array[min] = array[min-1] ;
            min-- ;
        }
        array[i] = key ;

    }
}
void display(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<" "<<array[i] ;
    }
}

int main()
{
    int array[] = {11,8,15,2,4,12,2,19} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    selectionSort(array,n) ;
    cout<<"sorted array is: ";
    display(array,n) ;
    return 0 ;
}