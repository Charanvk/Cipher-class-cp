#include<bits/stdc++.h>
using namespace std;
vector<int > insertion(vector<int >&a,int n)
{
	int curr,j;
	for(int i=1;i<n;i++)
	{
		curr=a[i];
		j=i-1;
		while(j>=0&&a[j]>curr)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=curr;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	insertion(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
