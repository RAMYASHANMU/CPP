// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void square(int n){
    // code here
    // i is rows 
  
 /*   int count=s;
    for(int i=0;i<s;i++){
        if(i==0){
            count=s;
            while(count-->0)cout<<"* ";
        }
        else if(i==s-1){
            count=s;
            while(count-->0)cout<<"* ";
        }
        else{
            count=2*s-3;
            cout<<"*";
            while(count-->0)cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    */
    
    int i,j;  // i for rows.... j for columns
    for(i=1;i<=n;i++){
        if(i==1 || i==n) // first and last rows end line should have space then newline
        {
            for(j=1;j<=n;j++)
            {
                cout<<"* ";
            }
        }
        else
            for(j=1;j<=n;j++)
            {
                if(j==n)
                    cout<<"*";
               else if(j==1)
                    cout<<"* ";
               else
                    cout<<"  ";
            }
        cout<<endl;
    }
    
}


    
    
   



// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        square(n);
    }
    return 0;
}  // } Driver Code Ends
