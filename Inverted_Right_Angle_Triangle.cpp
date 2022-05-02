// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void invTriangleWall(int s){
    
    //Write your code here
      //Write your code here
    int i, j;
    for(i=s;i>0;i--)
    {
        j=i;
        while(j-->0)
        {
            cout<<"* ";
            
            
        }
    cout<<endl;
}
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        invTriangleWall(s);
	}
}  // } Driver Code Ends
