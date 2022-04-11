// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void evenOdd(int a, int b){
/*Given two integers a and b. Your task is to print the even number first and odd number next in individual lines.
Note: Must print end of the line at the end.*/
        // Code here
   if(a%2==0 && b%2!=0) 
        cout<<a<<endl<<b<<endl;
    else if (b%2==0 && a%2!=0)
            cout<<b<<endl<<a<<endl;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        Solution obj;
        obj.evenOdd(a, b);
    }
    return 0;
}  // } Driver Code Ends
