#include<bits/stdc++.h> 
using namespace std; 
void subString(char str[], int n) 
{ 
   int count=0,counts=0;
	for (int len = 1; len <= n; len++) 
	{	 
     
		for (int i = 0; i <= n ; i++) 
		{ 

		int j = i + len - 1;			 
			for (int k = i; k <= j; k++) 
			{
			
		cout<<str[k];
				
		}
if(str[1]=='A'||str[1]=='E'||str[1]=='I'||str[1]=='O'||str[1]=='U')
				count++;
				else 
				counts++;
          			 
		} 
		cout<<endl;
		
     
	} 
	
  if(count>counts)
  cout<<"Abhi"<<" "<<count;
  else
  cout<<"Ramu"<<" "<<counts;
} 

int main() 
{ 
int n;
	char str[5];
	cin>>str;
	n=strlen(str);
	subString(str, n); 
	return 0; 
} 

