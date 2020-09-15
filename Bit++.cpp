#include<iostream>
using namespace std;

		int main()
{
	int x=0,i,a;
	string s;
	cin>>a;
	
	for(i=0;i<a;i++)
	{	cin>>s;
	if(s[1]=='+')
	{
		x++;
	}
	else
	{
		x--;
	}
	}
	cout<<x;
}
