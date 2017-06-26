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
	
		int count=0,temp=0,sum=0,max=0,total=0;
		cin>>n;
		total=0;
		long int a[n];
		long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>b[i];		
		}	
		
		long int s= n+n;
		long int c[s];
		
		for(int i=0;i<n;i++)
		c[i]=a[i];
		
		long int j=0;
		
		
		
		for(int i=n;i<s;i++)
		{		
			c[i]=b[j];
			j++;
		}
		
		sort(c,c+s);
		
		//for(int i=0;i<s;i++)
		//cout<<c[i]<<endl;
		
		long int result=c[n]+c[n-1];
		cout<<result<<endl;
	}	
	
	return 0;
}
