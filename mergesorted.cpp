#include<bits/stdc++.h>
using namespace std;
vector<int> mergesorted(vector<int >&a1,vector<int>&a2,int n,int m,vector<int> a3)

{
	
	int i=0,j=0,k=0;
		while(i<n&&j<m)
		{
			if(a1[i]<a2[j])
			a3[k++]=a1[i++];
			else
			a3[k++]=a2[j++];
		}	
	
	while(i<n)
	a3[k++]=a1[i++];
	while(j<m)
	a3[k++]=a2[j++];
}
int main()
{
	int n;
	int m;
	int k;
	
	vector<int> a1(n);
	vector<int >a2(m);
	vector<int> a3(n+m);
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>a2[j];
	}
	mergesorted(a1,a2,n,m,a3);
	for(int i=0;i<n+m;i++)
	{
		cout<<a3[i]<<" ";
	}
}
