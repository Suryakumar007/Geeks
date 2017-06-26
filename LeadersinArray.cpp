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
	
		int count=0,temp=0,sum=0,max=0,total=0,y=0,z=0,sum1=0,m=0;
		cin>>n;
		
		int a[n];
		int b[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];

		for(int i=0;i<n;i++)
		{
			count=0;
			temp=a[i];
			
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=temp)
				count++;
			}
			if(count==0 || n-i==1)
			{
				b[m]=temp;
				m++;
			}
		}
		
		for(int i=0;i<m;i++)
		cout<<b[i]<<' ';
		cout<<endl;
	}	
	
	return 0;
}
