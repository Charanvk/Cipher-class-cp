#include<bits/stdc++.h>
using namespace std;
void nextgreater(int a[], int n) {
    int i;
   
    stack<int>s;

    s.push(a[0]);
    for(i = 1; i < n; i++){

        while(!s.empty() && s.top() < a[i]) {
      
            cout<<a[i]<<" ";
            s.pop();
        }
 
        s.push(a[i]);
    }
	   while(!s.empty()) {
        cout<<"-1"<<" ";
        s.pop();
    }
}
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
    nextgreater(a, n);
    return 0;
}
