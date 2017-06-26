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
	
		int count=0,temp=0,sum=0,max=0,l,r;
		cin>>n;
	
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];		
		}	
				
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			cout<<sum<<endl;
			if(sum<0)sum=0;
			if(sum>max)max=sum;
		}
		
		cout<<max;
		//for(int i=0;i<n;i++)
		//cout<<a[i];
		
	}	
	
	return 0;
}
