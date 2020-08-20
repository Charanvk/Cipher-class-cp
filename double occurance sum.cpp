#include<bits/stdc++.h>
using namespace std;
int sumsubset(vector<int> &a,int n,int s)
{
	int i=0,j=n-1,count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==n)
	}
	if (j==0)
	return 1;
	else
	{
		
	
	while(i<j)
	{
		if(a[i]+a[j]==s)
		
		{
			if(a[i]==a[j])
			{
			count+=freq(a[i]])*freq(a[j]-1)/2;
			break;	
			}
			
			else if(a[i]+a[j]>s)
			j--;
			else
			count+=freq(a[i]*freq(a[j]));
			i+=freq(a[i]);
			j=freq(a[j]);
			
			
	}
	return count;
}
}
int main()
{
	int n,s;
	cin>>n;
	
	vector<int> a(n);
	for( int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cin>>s;
	cout<<sumsubset(a,n,s);
		
	
}
