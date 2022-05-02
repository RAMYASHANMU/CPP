// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
      for(int i=max(a,b);i<a*b;i++)
    {
        if(i%a==0 && i%b==0)
        return i;
    }
    return a*b;
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int a, b; cin>>a>>b;
        cout<<LCM(a, b)<<endl;
	}
}  // } Driver Code Ends
