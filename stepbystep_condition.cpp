// { Driver Code Starts
//Initial Template for C++

// CPP code to check divisibility of number
#include <bits/stdc++.h>
using namespace std;

// Prorotype of function
void isDivisibleByPrime(int);


 // } Driver Code Ends
//User function Template for C++

// Function to check divisibility
// N is the input integer
/*Given a positive integer n. Your task is to check if it divisible as given below:
1. If it is divisible by 2, print "Two".
2. If it is divisible by 3, print "Three".
3. If it is divisible by 11, print "Eleven".
4. If not follow above three rules, print "-1".
Note: If nis divisible by more than one of the above given numbers, print the one which is largest.*/
void isDivisibleByPrime(int n){
    
    // Your code here
    if((n%2==0 && n%3==0 && n%11==0) || (n%2==0 && n%11==0) || (n%3==0 && n%11==0)|| (n%11==0))
        cout<<"Eleven"<<endl;
    else if((n%2==0 && n%3==0) || (n%3==0))
        cout<<"Three"<<endl;
    else if(n%2==0) 
        cout<<"Two"<<endl;
    else 
        cout<<"-1"<<endl;
    
}

// { Driver Code Starts.

// Driver Code to test above function
int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        isDivisibleByPrime(n);
        
    }
    
	return 0;
}  // } Driver Code Ends
