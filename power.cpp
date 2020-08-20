#include<bits/stdc++.h>
using namespace std;
int pow(int x,int n)
{
	int res=1;
     while(n>0)
	 {
	 	if(n%2==1)
	 	res=res*x;
	 	n=n/2;
	 	x=x*x;
	 }	
	 return res;
}
int main()
{
	int n,x;
	cin>>x;
	cin>>n;
	cout<<pow(x,n);
}
