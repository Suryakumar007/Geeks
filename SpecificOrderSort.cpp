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
		cin>>n;
		count=0;
		count1=0;
		int a[n];
		int asc[n]={0};
		int des[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		//sort(a,a+n);
		
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				des[count]=a[i];
				count++;
			}
			else
			{
				asc[count1]=a[i];
				count1++;
			}
			
		}	
		
		sort(asc,asc+count1);
		sort(des,des+count,greater<int>());
		
		for(int i=0;i<n;i++)
		{
			cout<<des[i];
		}	
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<asc[i];
		}	
		
		int m=count+count1;
		int merge[m];
		for(int i=0;i<m;i++)
		{
			merge[i]=des[i];
		}
		for(int i=0;i<=count1;i++)
		{
			merge[count+1]=asc[i];
			count++;
		}
		
		for(int i=0;i<m;i++)
		{
			cout<<merge[i];
		}
		
	}	
	
	return 0;
}
