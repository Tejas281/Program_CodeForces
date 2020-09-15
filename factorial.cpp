#include<stdio.h>
#include<conio.h>
#include<iostream>


		int fac(int n)
		{
			if(n>1)
			{
			
				
				return	n*(fac(n-1));
			}
		
			
		}
		
		int main()
		{
			printf("%d",fac(6));
			
		}
		
		
