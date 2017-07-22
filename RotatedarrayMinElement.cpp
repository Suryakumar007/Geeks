#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int findmin(int a[], int l, int r)
{
   int mid=l+(r-l)/2;
   
   if(a[mid]<a[mid-1])
   	{
   		return mid;
	}
	
	else if(a[mid]>a[r])
		findmin(a,mid+1,r);
	else
		findmin(a,l,mid-1);
	
}

int main(int argc, char** argv) 
{
	//int arr1[] =  {10,11,12,13,14,15,1,2,3};
	int arr1[] =  {10,1,2,3,4,5,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int m= findmin(arr1, 0, n1-1);	
    cout<<m;
	return 0;
}
