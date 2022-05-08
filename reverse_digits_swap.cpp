// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//first reverse the order of two digits and then swap them
void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int num1=0 , num2=0;
    while(a>0)
    {
        int remain = a%10;
        num1=num1*10+remain;
        a/=10;
    }
    while(b>0)
    {
        int remain= b%10;
        num2=num2*10+remain;
        b/=10;
    }
    a=num1;
    b=num2;
   
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp =a;
    a=b;
    b=temp;
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends
