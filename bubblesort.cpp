#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int > bubble(vector<int >&a,int n)
{
	int i;
      for(int i=0;i<n;i++)
	  {
	  
	  	for(int j=0;j<n-i;j++)
	  	{
	  		if(a[j]>a[j+1])
	  		swap(a[j],a[j+1]);
	  		
	  	} 	
	 
	  }
	  return a;
}
int main()
{
	int n;
	cin>>n;
	vector<int >a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubble(a,n); 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
