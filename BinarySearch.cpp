#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binsearch(int a[],int l,int r,int x)
{
	if(r>=l)
	{
		cout<<l<<r<<endl;
		int mid=l+(r-l)/2;
		
		if(a[mid]==x)
		return mid;
		
		else if(a[mid]>x)
		{
			binsearch(a,l,mid-1,x);
			//cout<<l<<mid-1<<endl;
		}
			
			
		else if(a[mid]<x)
		{
			binsearch(a,mid+1,r,x);
			//cout<<mid-1<<r<<endl;
		}
			
		
	}
	else
	return -1;
}


int main()
{
	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int x;
	cin>>x;
	
	int result=binsearch(a,0,n-1,x);
	cout<<result;
	return 0;
}

