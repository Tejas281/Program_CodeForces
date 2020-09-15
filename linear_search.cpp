#include<stdio.h>
#include<conio.h>

			int search (int arr[],int element, int indexvalues,int values )
		
			{
				
			
				int i;
				
				if(element<indexvalues)
				
				return -1;
				
				if(arr[element]==values)
				return element;
				
				if(arr[indexvalues]==values)
				return indexvalues;
				
				return search(arr,element+1,indexvalues-1,values);			
	
	
			}
			
			
			int main()
			{
			int arr[] = {2,5,7,8};
			int i;
			int n;
			int values=2;
		
				int index = search(arr,0,n-1,values);
		
				if(index != -1)
				{
					printf("%d %d",values,index+1);
				}
				else
				{
					printf("%d",values);
				}
		
			}
