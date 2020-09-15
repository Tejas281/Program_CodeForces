#include<bits/stdc++.h>
using namespace std;

		void swap(int *a,int *b)
		{
			int temp=*a;
			*a=*b;
			*b=temp;
		}
		
		void bubblesort(int arr[], int n)
		{
			
			int i,j;
			
			for(i=0;i<n-1;i++)
			{
					for(j=0;j<n-i-1;j++)
					{
						if(arr[j] > arr[j+1])
						{
							swap(&arr[j], &arr[j+1]);
						}
					}
				
			}
			
		}
		
		void printarray(int arr[], int size)
		{
		
		int i;
		
			for(i=0;i<size;i++)
				{
				cout<<arr[i];
					cout<<"Sorted arraycvc: \n"; 	
				cout<<endl;
				}	
		}

		
		int main()
		{
		int arr[5];
		int n,i;
		
		cout<<"enter array values";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
	}
		bubblesort(arr,n);
		cout<<"Sorted array: \n"; 
	    printarray(arr,n);		
	
		return 0;
		
		}		
		
		
		
		
		
		
		
		
