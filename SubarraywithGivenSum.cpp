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
	
		int count=0,temp=0,sum=0,max=0,total=0,y=0,z=0,sum1=0,min=10000,lsum=0,rsum=0,s=0;
		cin>>n;
		cin>>s;
		sum=s;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			sum=s;
			
		for(int j=i;j<n;j++)
		{
			sum=sum-a[j];
			//cout<<sum<<endl;
			if(sum==0)
			{
				cout<<i+1<<' '<<j+1;
				cout<<endl;
				count++;
				break;
				
			}
			
		}
		if(count>0)
		{
			//cout<<"break";
			break;
		}
		
		}
		
		
	}	
	
	
	return 0;
}
