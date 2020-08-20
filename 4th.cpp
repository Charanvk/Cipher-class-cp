#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,j,i;
	cin>>n;
	for( i=0;i<n;i++)
	{
		num=1;
		for( j=0;j<=i;j++)
		{
			cout<<num <<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}
