// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

//Given an integer s,  write a program to print the square wall of size s using single loops. Use * character to make the wall.

void squareWall(int s) {
    // code here
    int i,j;
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        int n;
        cin >> n;
        squareWall(n);
    }

    return 0;
}  // } Driver Code Ends
