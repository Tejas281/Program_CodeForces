#include<stdio.h>
#include<conio.h>
#include <bits/stdc++.h> 
using namespace std; 


		bool hasharray(int a[],int arr_size,int sum)
		{
			int l,r;
			 sort(a, a + arr_size); 
			l = 0;
			r = arr_size -1;
			while (l<r)
	
			{
				if(a[l]+a[r]==sum)
				return 1;
				else if (a[l] + a[r] < sum)
				l++;
				else 
				r--; 
			}
			
			return 0;
			
		}
		
		int main()
		{
			int a[]={ 1, 4, 45, 6, 10, -8 };
			int n=16;
			
			int arr_size = sizeof(a)/sizeof(a[0]);
			if(hasharray(a,arr_size,n))
			{
				printf("valied");
				
			}
			else
			{
				printf("unvalied");
			}
			return 0;
			
		}
