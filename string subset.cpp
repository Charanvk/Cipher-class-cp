#include<bits/stdc++.h>
using namespace std;

void rec(string str,int n,int index=-1,
	string curr=" ")
{
	
	if(index==n)
	return;
	 
	 cout << curr << "\n"; 
    for (int i = index + 1; i < n; i++) { 
  
        curr += str[i]; 
        rec(str, n, i, curr); 
  
        curr = curr.erase(curr.size() - 1); 
    } 
    return; 
} 
void powerset(string str)
{
	sort(str.begin(),str.end());
	rec(str,str.size());
}

int main()
{
	string str;
	cin>>str;
	powerset(str);
}
