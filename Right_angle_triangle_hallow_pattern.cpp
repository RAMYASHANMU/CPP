// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void triangle(int s){
        
    //Write your code here
     int i,j;
    for(i=1;i<=s;i++)
    {   
       
        if(i==1)
            cout<<"*";
        else if(i == s)
        {   
            j=i;
            while(j>0)
            {
                cout<<"* ";
                j--;
            }
        }
        else
        {
        j=2*(i-1);
        cout<<"*";
        while(j-->0)
        {
            cout<<" ";
            
        }
        cout<<"*";
        
        }
        
              

    
     cout<<endl;
    }
 
}

/*void triangle(int s){
    int count = s;
    for(int i = 0; i < s; i++){
        if(i == 0) {
            cout<<"*";
        }
        else if(i == s-1){
            count = s;
            while(count-- > 0){
                cout<<"* ";
            }
        }
        else{
            count = 2 * i;
            cout<<"*";
            while(count-- > 0){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}*/
   
        


// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}  // } Driver Code Ends
