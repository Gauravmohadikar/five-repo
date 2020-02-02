#include<iostream>
using namespace std;


void merge(int a[], int p, int q, int r)
{
	int n1=q-p+1;
	int n2=r-q;
	
	int left[n1];
	int right[n2];
	
	for(int i=0;i<n1;i++)
	{
		left[i]=a[p+i];
	}
	
	for(int j=0;j<n2;j++)
	{
		right[j]=a[q+j+1];
	}
	
	int m=0;
	int n=0;
	int k;
	for( k=p;k<r;k++)
	{
		if(left[m]<=right[n])
		{
			a[k]=left[m];
			m++;
		}
		else
		{
			a[k]=right[n];
			n++;
		}
	}
	
	while (m < n1)
    {
        a[k] = left[m];
        m++;
        k++;
    }
    while (n < n2)
    {
        a[k] = right[n];
        n++;
        k++;
    }
	
}


void merge_sort(int a[], int p, int r)
{
	
	if(p<r)
	{
		int q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}


void display(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
}

int main()
{
	int a[20];
	int size;
	int choice;
	char ch;
	do
	{
		cout<<"\n1.Enter the elements of the array\n";
		cout<<"2.Display\n";
		cout<<"3.Merge Sort\n";
		cout<<"4.Exit";
		cout<<"\n\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\nEnter the size of the array: ";
					cin >>size;
					cout<<"\n\nInsert the elements of array: ";
	
					for(int i=0;i<size;i++)
					{
						cin>>a[i];
					}
					break;
					
			case 2: display(a,size);
					break;
					
			case 3: merge_sort(a,0,size-1);
					break;
			
			case 4: exit(0);
					break;
					
			default: cout<<"\nWrong choice!!";
			
		}
		cout<<"\nDo you want to continue(Y/N): ";
		cin>>ch;		
	}while(ch=='y' || ch=='Y');
	
	
}
