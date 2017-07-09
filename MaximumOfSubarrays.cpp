#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
	    cin>>n;
	    
	    int k;
	    cin>>k;
	    
	    int a[n];
	    int max=0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<=n-k;i++)
	    {	    
			max=a[i];	
	    	for(int j=1;j<k;j++)
	    	{
	    		if(a[i+j]>max)
	    		max=a[i+j];
			}
			cout<<max<<" ";
		}
		cout<<endl;
		
		
	}
    
    
    
    return 0;
}
