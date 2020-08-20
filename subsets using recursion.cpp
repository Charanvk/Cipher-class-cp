#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ps(vector<int> &a,int n,int pos,vector<int> s)
{
	int i;
	
      if(pos==n)
	  {
	  for(int i=0;i<s.size();i++)	cout<<a[s[i]];cout<<endl;
	  
	  }	
	  else{
	  
	  ps(a,n,pos+1,s);
	  s.push_back(pos);
	  ps(a,n,pos+1,s);}
}
int main()
{
	int n;
	cin>>n;

	
	vector<int> a(n);
	vector<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ps(a,n,0,s);
}
