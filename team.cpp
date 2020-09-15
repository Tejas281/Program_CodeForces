#include<iostream>
#include<string>
using namespace std;


	int main()
	{

			int n,a,b,d,c=0,s=0;

			scanf("%d",&n);
			
			while(n--)
			{
				scanf("%d %d %d,",&a,&b,&c);
				if(a==1) c++;
				if(b==1) c++;
				if(d==1)  c++;
				
				if(c>=2) s++;
				
				c=0;
				
				
			}

			printf("%d\n",s);
	}
	
	
