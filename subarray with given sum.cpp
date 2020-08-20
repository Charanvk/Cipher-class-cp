 #include<bits/stdc++.h>
 using namespace std;
 int main()
 
 {

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,s;
	    cin>>n>>s;	
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    int start=0,end=0,sum=0;
	    while(end<=n)
		{
	        if(sum==s)
			{
	            cout<<start+1<<" "<<end<<endl;
	            break;
	        }
	        if(sum<s)
			{
	            sum=sum+a[end];
	            end++;
	        }
	        if(sum>s)
			{
	            sum=sum-a[start];
	            start++;
	        }
	    }
	    if(sum!=s)
	    cout<<-1<<endl;
	}
	
}
