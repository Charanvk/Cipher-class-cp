	#include<bits/stdc++.h>
using namespace std;
int min(vector<int> &a,int l,int h,int n)
{
    
    int mid=(l+h)/2;
    if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1)||a[mid+1]<=a[mid])
    return mid;
    else if(mid>0&&a[mid-1]>a[mid])
    return min(a,l,mid-1,n);
    else
    return min(a,mid+1,h,n);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[min(a,0,n-1,n)];
}
