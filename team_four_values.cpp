#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;



int main()
{
	
		int a,b,d,e=0,c,n,s=0;
		
		scanf("%d",&n);
		
		while(n--)
		{
			scanf("%d %d %d d%",&a,&b ,&d,&c);
			if(a==1)e++;
			if(b==1)e++;
			if(c==1)e++;
			
			if(d==1)e++;
			
		
			if(e>=1)s++;
			
			e=0;
			
		}
		
		printf("%d\n",s);
	
	
	
	
}
