#include <iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count=0,count1=0,t,temp,v;
	
	cin>>t;		
	
	while(t--)
	{	
		int acount=0,dcount=0,max=0;
		cin>>n;
	
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
			max=a[i];
		}		
		
		
		for(int i=0;i<n-1;i++)
		{
			
			
			if(a[i]<a[i+1])
			{				
				acount++;
			}
			else if(a[i]>a[i+1])
			{				
				dcount++;
			}			
			
		}		

		if(dcount==0)
		cout<<max<<' '<<'1';
		if(acount==0)
		cout<<max<<' '<<'2';
		if(dcount!=0 && acount>dcount)
		cout<<max<<' '<<'4';
		if(acount!=0 && dcount>acount)
		cout<<max<<' '<<'3';		
		
		
	}	
	
	return 0;
}
