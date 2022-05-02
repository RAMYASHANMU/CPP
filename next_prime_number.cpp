// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

bool isprime(int p)
{
    if(p==0)
        return 0;
    if(p==1 || p==2)
        return 1;
    else 
    for(int i=2;i<=sqrt(p);i++)
    {
        if(p%i==0)
            return 0;
    }
    return 1;
}
int nextPrime(int n){
      
        
    //code here to find next prime number
    //return next prime number
    n++;
   while(true)
   {
       if(isprime(n))
        return n;
        else
          n++;
   }
    
     
    
   
    
        
     
   
    

   
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends
