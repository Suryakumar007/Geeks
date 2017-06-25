#include <iostream>
#include<stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count=0,t,temp,v;
	
	cin>>t;		
	
	while(t--)
	{	
		cin>>n;
		count=0;
		int a[1005]={0};
		int b[1005]={0};
		for(int i=0;i<n;i++)
		{
			cin>>v;
			a[v]++;
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>v;
			b[v]++;
		}
		
		for(int i=0;i<1005;i++)
		{
			if(a[i]==b[i]&& a[i]!=0)
			{
				count+=a[i];
				cout<<a[i]<<endl;
			}
			
		}
		cout<<count;
	
	}	
	
	return 0;
}
