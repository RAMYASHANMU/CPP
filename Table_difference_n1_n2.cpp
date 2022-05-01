// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/*Given two number n1 and n2, n1 > n2. Find the differences between mathematical tables of n1 and n2.*/
 // } Driver Code Ends
//User function Template for C++

void difference(int n1, int n2){
    
    //Write your code here
      for(int i=1;i<=10;i++)
    cout<<((n1*i)-(n2*i))<<" ";
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n1, n2;
	    cin>>n1>>n2;
        difference(n1, n2);
        cout<<endl;
	}
}  // } Driver Code Ends
