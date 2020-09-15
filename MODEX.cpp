#include <bits/stdc++.h> 

long long modex(long long a,long long b,long long n)

{
	long long temp;
		
	if(b%2==0)
	{
		temp=(a*((b/2)*2));
		return temp;
	}
	
	else{
	
		temp=(a*((b-1)/2)*2);
		return (temp*a)%n;
	
	
	}


}

int main()
{
	printf("%d",modex(2 ,3 ,5));
}
