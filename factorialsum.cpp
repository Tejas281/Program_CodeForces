#include<stdio.h>
#include<conio.h>


int factorialsum(int n)
{
	if(n>=3)
	{
		return factorialsum(n-1)+factorialsum(n-2);
	}
	else{
		return 1;
	}
	
}

int main()
{
	
	printf("%d",factorialsum(11));
}
