#include<bits/stdc++.h>
using namespace std;
fun(int cnt)
{
	if(i==j==3-1)
	{
		return 1;
	}
	else
	{
		cnt+=fun(i+1,j);
		cnt+=fun(i,j+1);
	}
}
int main()
{
	int cnt=0;
	int a[2][2]={{1,1,1},{1,1,1,},{1,1,1}};
	cnt+=fun(cnt);
}
