#include<bits/stdc++.h>
using namespace std;
void push_back(stack <int>& s,int n)
{
	if(s.empty())
	s.push(n);
	else
	{
		int top1=s.top();
		s.pop();
		push_back(s,n);
		s.push(top1);
	}
}
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	int i=0;
	while(i<s.size())
	{
		int temp=s.top();
		s.pop();
		push_back(s,temp);
		i++;
}
		cout<<s.top();
	
}
