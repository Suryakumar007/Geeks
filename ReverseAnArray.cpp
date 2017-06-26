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
		int j=0;
		
		for(int i=n-1;i>=0;i--)
		{
			b[j]=a[i];
			j++;	
		}
		for(int i=0;i<n;i++)
		cout<<b[i]<<' ';
		
		cout<<endl;
	}	
	
	return 0;
}
