#include<bits/stdc++.h>
using namespace std;
bool triplet(int a[],int n,int sum)
{
	int count=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;i<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				
				if(a[i]+a[j]+a[k]==sum)
				cout<<count++;
				return true;
			}
			
		}
			
	}
	return false;
}
	

int main()
{
	int n,sum,count=0;;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>sum;
	cout<<triplet(a,n,sum);

return 0;

}
