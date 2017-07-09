#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0,min=INT_MAX;
	int a[n];
	bool isodd=false;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			sum=sum+a[i];
		}
		
		if(a[i]%2!=0)
		{
			isodd =true;
			if(abs(a[i])<min)
			{
				min=abs(a[i]);
				cout<<min;
			}
			
		}
	}
	cout<<min;
	
	if(isodd==false)
	cout<<"-1";
	
	else
	{
		if(sum%2==0)
		sum=sum-min;
		cout<<sum;
	}
	
	return 0;
}
