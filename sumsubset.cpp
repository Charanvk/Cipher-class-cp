	#include<bits/stdc++.h>
using namespace std;
int sumsubset(vector<int> &a,int n,int s)
{
	int i=0,j=n-1,count=0;
	if (j==0)
	return 1;
	else
	{
		
	
	while(i<j)
	{
		if(a[i]+a[j]==s)
		{
			count++;
			i++;
			j--;
		}
		else if(a[j]+a[i]>s)
		{
			j--;
		}
		else
		i++;
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
