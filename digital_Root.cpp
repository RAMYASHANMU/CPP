// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/* //Your code here
       if(n<10) return n;
       return 1 + digitalRoot((n-1)%9);*/

/*
class Solution{
  public:
    // function to calculate digit sum of a number
    int sumDigits(int n)
    {
        // returning n if n / 10 is 0
        if(n / 10 == 0)
            return n;
        // else adding digit sum
        else
            return n % 10 + sumDigits(n/10);
    }
    
    
    // function to calculate the single digit answer
    int digitalRoot(int n)
    {
        // if n is less than n then 
        // returning the n
        if(n / 10 == 0)
            return n;
        // else calling sumDigits function
        else
            return digitalRoot(sumDigits(n));
        
    }
};*/

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        //Your code here
   int sum;
          if(n<10) return n;
          else
          sum=0;
          while(n != 0)
          {
          sum += n%10;
          n=n/10;
          }
   return digitalRoot(sum);

    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends
