// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
/*You have to generate a single sum() function which can take two, three or four parameters and will return sum of all the numbers. Suppose if we are given with 2 integer values a and b we have to return (a+b), if given 3 integer values a, b and c we have to return (a+b+c) and similarly for 4 numeric values (a+b+c+d). Function call will be like this:

If 2 integers : sum(a, b);

If 3 integers : sum(a, b, c);

If 4 integers : sum(a, b, c, d); */
int sum(int a=0 , int b =0, int c=0,int d = 0) 
{ 
    //code here 
    return (a+b+c+d);
}



// { Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        
        int c;
        cin>>c;
        if(c==2)
        {
            int a, b;
            cin >> a >> b ;
            cout << sum(a, b) << endl;
            
        }
        else if(c==3)
        {
            int a, b, c;
            cin >> a >> b >> c;
            cout << sum(a, b, c) << endl;
                
        }
        else if(c==4)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            cout << sum(a, b, c, d) << endl;
        
        }
    }
    return 0;
}   // } Driver Code Ends
