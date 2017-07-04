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
	
		int count=0,temp=0,sum=0,max=0,total=0,y=0,z=0,sum1=0;
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];

		sum=a[0];
		
		for (int i = 1; i < n; i++)
		{		 
			
			if(sum > sum1)
			temp=sum;
			else
			temp=sum1;		    	
		    sum = sum1 + a[i];
		    sum1 = temp;
		}
		
		if(sum>sum1)
		cout<<sum;
		else
		cout<<sum1;
				
	}	
	
	return 0;
}
