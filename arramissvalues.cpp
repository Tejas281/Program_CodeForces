#include<stdio.h>
#include<conio.h>


		int getarray(int arr[] , int number)
		{
			
			int i;
			int values;
			
			values= (number  * (number + 1) )/ 2;
		
				for(i=0;i<number;i++)
				{
				
					values=values-arr[i];
			
					}	
				return values;
			
		}
		
		
		int main()
		{
			int  arr[]={1,2,3,4,6};
			int missvalues = getarray(arr,6);
			printf("%d",missvalues);
			
			
		}
