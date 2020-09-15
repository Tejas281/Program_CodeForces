#include<bits/stdc++.h>
using namespace std;


void bubblesort(int arr[],int n)
{
	int i,j,temp;
	
	
	for(i=0;i<=n;i++)
	{
		
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1]) 
			{
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp; 
			}	
		}
	}
	
}

int main()
{
	int arr[]={5,2,1,90,23};
	int n=4,i;
	
	
	bubblesort(arr,n);
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;

}


