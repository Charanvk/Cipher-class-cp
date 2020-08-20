#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	multiset<int> s;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		s.insert(a[i]);
	}
	multiset<int>::iterator itr;

	for(itr=s.begin();itr!=s.end();itr++)
	{
		int t=n;
			s.erase(a[n]);
		cout<<*s.end();
		n--;
		
	}
		
	
	
}
