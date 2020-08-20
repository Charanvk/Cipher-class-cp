#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,s;
	int sum=0;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int end=0,start=0;
while(end<=n)
{
	if(sum==s)
	{
		cout<<start+1<<" "<<endl;	
		break;
	}
	if(sum<s)
	{
		sum=sum+a[end];
		end++;
	}
	if(sum>s)
	{
		sum=sum-a[start];
		start++;
	}
}
if(sum!=s)
{
		cout<<-1<<endl;
}
	
}


   return 0;
}

