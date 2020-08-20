 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int i, j,n;
	 cin>>n; 
    for (i=1; i<=n; i++) 
    { 
        for (j=1; j<=n - i; j++) 
            cout << " "; 
            
            
            if (i==1 || i==n) 
            for (j=1; j<=n; j++) 
                cout << "*"; 

        else
            for (j=1; j<=n; j++) 
                if (j==1 || j==n) 
                    cout << "*";   
                else
                    cout << " "; 

        cout << "\n"; 
    } 
} 
 
 
 
