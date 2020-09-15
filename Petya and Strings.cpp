#include<stdio.h>
#include<iostream>
using namespace std;

		int main()
		{
			string s;
			string t;
			int i;
			cin>>s;
			cin>>t;
			
			
			for(i=0;i<s.size();i++)
		{
			
				s[i]=towlower(s[i]);
				t[i]=towlower(t[i]);
				
		}
					if(s==t)
				{
					cout<<"0"<<endl;
				}
			else{
			
			for(i=0;i<s.size();i++)
			{
			
					if(s[i]<t[i])
				{
					cout<<"-1 "<<endl;
					break;
				}
		
		
					if(s[i]>t[i])
				{
					cout<<"1 "<<endl;
					break;
				}
				}
				}
		}
