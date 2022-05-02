// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

bool prime(int n){
    
    //Write your code here
    //returns a boolean value 
    if(n==1)
        return 0;
    if(n==2 || n==3)
        return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
        bool ans = prime(n);
        if(ans)
            printf("True\n");
        else
            printf("False\n");
	}
}  // } Driver Code Ends
