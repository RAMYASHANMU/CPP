// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
//You are given an array that contains integers. You need to decrement each element of the array by 1 and return the array.

int  * decrementArrayElements(int numbers[], int size){
    
    //write your code here
    for(int i=0;i<size;i++)
    {
        numbers[i]-=1;
    }
    return numbers;
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        int *res;
        res = decrementArrayElements(numbers, n);
        for(int i = 0; i < n; i++){
            cout << *(res + i) << " ";
        }
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
