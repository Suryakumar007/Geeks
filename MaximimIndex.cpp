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
	    
	    int a[n];
	    int max=-1;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<n;i++)
	    {
	    	for(int j=n-1;j>0;j--)
	    	{	    		
	    		if(a[j]>a[i] && (j-i)>max)
	    		{
	    			max=j-i;
				}
			}
		}
		
		cout<<max;
	}
    
    
    
    return 0;
}
