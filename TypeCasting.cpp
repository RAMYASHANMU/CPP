// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
//Given a double value d, typecast it to an integer value.

int typeCast(double d){
    
    //code here
    return static_cast<int>(d);
    
}

// { Driver Code Starts.    

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    double d;
	    cin>>d;
	    
	    int answer = typeCast(d);
            
        cout<<answer<<endl;
	}
	
}  // } Driver Code Ends
