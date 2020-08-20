#include<bits/stdc++.h>
using namespace std;
int min(vector<int> &a,int n)
{
    int l=0,h=n-1;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(a[mid]<a[h])
        {
            h=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return a[l];
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
    cout<<min(a,n);
}
