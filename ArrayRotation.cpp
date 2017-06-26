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
	
		int count=0,temp=0,sum=0,max=0,total=0,y;
		cin>>n;
		cin>>x;
		total=0;
		long int a[n];
		long int b[x];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}				
		
		for(int i=0;i<x;i++)
		b[i]=a[i];	
		
		int d=x;
		int c=n-x;
		
		for(int i=0;i<c;i++)
		{		
		
			a[i]=a[x];
			x++;			
		}
		
		y=0;	
		
		for(int i=c;i<n;i++)
		{
			
			a[i]=b[y];
			y++;			
		}
		
		for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
		
	}	
	
	return 0;
}
