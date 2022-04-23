// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* swap two numbers */
 // } Driver Code Ends
//User function Template for C++

void utility(int &a, int &b)
{
  a=a+b;
  b=a-b;
  a=a-b;
}


// { Driver Code Starts.    

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    utility(a, b);
	    
	    cout<<a<<" "<<b<<endl;
	}
	
}  // } Driver Code Ends
