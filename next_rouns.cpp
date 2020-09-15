#include<iostream>
using namespace std;

		int main()
		
		{
			int x,k,i,c=0;
			
			scanf("%d%d",&x,&k);
			int n[x];
			for(i=0;i<x;i++)
			
				scanf("%d",&n[i]);	
			
			k=k-1;
			
			for(i=0;i<x;i++)
			{
				if(n[i]>=n[k] && n[k]>0){
				
				c++;
			}
			else{
				if(n[k]<n[i])
				{
					c++;
				}
			}
			}
			
			printf("%d\n",c);
			
		}

