#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int num[n];
	    for(int i = 0; i < n; i++){
	        cin>>num[i];
	    }
	    int count = 0, sum;
	    for(int i = 0; i < n; i++){
	        sum = 0;
	        for(int j = i; j < n; j++){
	            sum+=num[j];
	            if(sum == 0) count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
