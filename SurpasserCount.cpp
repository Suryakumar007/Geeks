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
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}	
		
		for(int i=0;i<n;i++)
		{
			temp=a[i];
			count=0;
			for(int j=i+1;j<n;j++)
			{				
				if(a[j]>temp)
				{				
					count++;
				}
				
			}
			b[i]=count;
		}
		
		for(int i=0;i<n;i++)
		cout<<b[i]<<' ';
		cout<<endl;
		
	}	
	
	return 0;
}
