#include<bits/stdc++.h>
using namespace std;
int doubleocurance(vector<int> &a,int n)
{
	int l=0;
	int h=n-1;
     while(l<h)
     {
     	int mid=(l+h)/2;
		if(mid=!a[mid])
		{
			return mid;
		}
		else if()
		
     }
		
	
	return a[l];
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
	cout<<doubleocurance(a,n);
}
