#include<bits/stdc++.h>
using namespace std;
void swap(int *xp ,int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void printarray(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i;
	for(int i=0;i<n-1;i++)
	{
	int	min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
			swap(&a[min],&a[i]);	
		}	
	}
	printarray(a,n);
}
