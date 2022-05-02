// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void triangleWall(int s){
    
    //Write your code here
     int i,j;
    for(i=1;i<=s;i++)
    {   
          j=i;
          while(j>0)
          {
              cout<<"* ";
              j--;
          }
        
     cout<<endl;
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        triangleWall(s);
	}
}  // } Driver Code Ends
