#include<stdio.h>
#include<conio.h>


int multipicaltion(int a,int b)
{
	int temp;
	if(b==0)
	{
		return 1;
	}
	{
	
	if(b%2==0)
	{
		temp=(a*((b/2)*2));
		return temp*temp;
	}
	
	else{
	
		temp=(a*(b-1)/2*2);
		return temp*temp*a;
	
	
	}
}
	
}

int main(){
	
	printf("multiplicaition is %d",multipicaltion(4,5));
}
