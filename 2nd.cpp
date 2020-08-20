#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,i;
	cin>>n;
	for( i=0;i<n;i++)
	{
		for( j=2*(n-i-1);j>=0;j--)
		{
			cout<<" ";
		}
		for( j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
