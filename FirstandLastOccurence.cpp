#include <iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count1=0,t,temp,x;
	
	cin>>t;		
	
	while(t--)
	{	
		int count=0,first=0,last=0;
		cin>>n;
	
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}	
		cin>>x;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				count++;
				if(count==1)
				first=i;
				last=i;
			}
		}
		if(count==0)
		cout<<"-1";
		else		
		cout<<first<<' '<<last;
		
	}	
	
	return 0;
}
