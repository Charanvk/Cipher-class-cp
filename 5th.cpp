#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,i;
	int num=1;
	cin>>n;
	for( i=0;i<n;i++)
	{
		for( j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}
