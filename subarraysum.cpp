#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
}
	map<int,int> m;
	int s;
	cin>>s;
	int currsum=0; 	
	int count=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
		if(currsum=s)
		count++;
		if(m.find(currsum-s)!=m.end())
		count+=m[currsum-s];
		m[currsum]++;
		
	}
	cout<<count;

}

